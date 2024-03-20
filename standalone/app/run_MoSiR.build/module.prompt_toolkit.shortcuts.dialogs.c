/* Generated code for Python module 'prompt_toolkit$shortcuts$dialogs'
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

/* The "module_prompt_toolkit$shortcuts$dialogs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_prompt_toolkit$shortcuts$dialogs;
PyDictObject *moduledict_prompt_toolkit$shortcuts$dialogs;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[208];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[208];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("prompt_toolkit.shortcuts.dialogs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 208; i++) {
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
void checkModuleConstants_prompt_toolkit$shortcuts$dialogs(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 208; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_3f59bc567badb9861e981f4a814c16db;
static PyCodeObject *codeobj_b35bd95f21877793943eee00edbf7ed7;
static PyCodeObject *codeobj_9026528d3675ad227ed789a8171991b0;
static PyCodeObject *codeobj_b37f09282629b4fd158328b460fa006b;
static PyCodeObject *codeobj_7c11fade6fecaf95a5d3e27bad061476;
static PyCodeObject *codeobj_3c07e7d15bd7103f4edec63ae659fee1;
static PyCodeObject *codeobj_1c72cb2b0dfd3ec07339d1ff46b6e372;
static PyCodeObject *codeobj_c390f8b883d75429ff73ad0e39bfe340;
static PyCodeObject *codeobj_258d755dda6f8117c292cad8e25919ee;
static PyCodeObject *codeobj_6c00ed9ac9e6f9106aba3209c7d020d6;
static PyCodeObject *codeobj_934eaed0fde5ec1d9a66d343dd456e0c;
static PyCodeObject *codeobj_fd4fcf8b7e36f49146cb711fc9dd1775;
static PyCodeObject *codeobj_c2bfcbfe671b778f5783624611507a9e;
static PyCodeObject *codeobj_166db662be2546ba78c5e61a3a53101e;
static PyCodeObject *codeobj_2434ba380c050d7efe79745fdd1d855b;
static PyCodeObject *codeobj_a828aff7e479ab7b3a38a3e0f8aa643b;
static PyCodeObject *codeobj_7fac60e427a2a3d013053ea038a93418;
static PyCodeObject *codeobj_9207381983eed5246ea543b3c8cd0960;
static PyCodeObject *codeobj_cf3b9272685833c10dabf8d7e5a93d5b;
static PyCodeObject *codeobj_46e769bf08ce13ff9a2df3722ae129f1;
static PyCodeObject *codeobj_1617215cc81553662aca0ccdcc9a5122;
static PyCodeObject *codeobj_5711bedfff14d0307d18792f351a899f;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[184]); CHECK_OBJECT(module_filename_obj);
    codeobj_3f59bc567badb9861e981f4a814c16db = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts[180], mod_consts[180], mod_consts[185], NULL, 0, 0, 0);
    codeobj_b35bd95f21877793943eee00edbf7ed7 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[186], mod_consts[186], NULL, NULL, 0, 0, 0);
    codeobj_9026528d3675ad227ed789a8171991b0 = MAKE_CODE_OBJECT(module_filename_obj, 313, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[11], mod_consts[11], mod_consts[187], NULL, 2, 0, 0);
    codeobj_b37f09282629b4fd158328b460fa006b = MAKE_CODE_OBJECT(module_filename_obj, 328, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[30], mod_consts[30], NULL, NULL, 0, 0, 0);
    codeobj_7c11fade6fecaf95a5d3e27bad061476 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[26], mod_consts[26], mod_consts[188], mod_consts[189], 1, 0, 0);
    codeobj_3c07e7d15bd7103f4edec63ae659fee1 = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[168], mod_consts[168], mod_consts[190], NULL, 4, 0, 0);
    codeobj_1c72cb2b0dfd3ec07339d1ff46b6e372 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[19], mod_consts[19], mod_consts[191], NULL, 1, 0, 0);
    codeobj_c390f8b883d75429ff73ad0e39bfe340 = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[179], mod_consts[179], mod_consts[192], NULL, 7, 0, 0);
    codeobj_258d755dda6f8117c292cad8e25919ee = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[171], mod_consts[171], mod_consts[193], NULL, 9, 0, 0);
    codeobj_6c00ed9ac9e6f9106aba3209c7d020d6 = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[73], mod_consts[73], mod_consts[194], mod_consts[195], 1, 0, 0);
    codeobj_934eaed0fde5ec1d9a66d343dd456e0c = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[174], mod_consts[174], mod_consts[196], NULL, 4, 0, 0);
    codeobj_fd4fcf8b7e36f49146cb711fc9dd1775 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[3], mod_consts[3], NULL, NULL, 0, 0, 0);
    codeobj_c2bfcbfe671b778f5783624611507a9e = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[28], mod_consts[28], mod_consts[197], mod_consts[197], 0, 0, 0);
    codeobj_166db662be2546ba78c5e61a3a53101e = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[28], mod_consts[28], mod_consts[198], mod_consts[198], 0, 0, 0);
    codeobj_2434ba380c050d7efe79745fdd1d855b = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[28], mod_consts[28], mod_consts[199], mod_consts[199], 0, 0, 0);
    codeobj_a828aff7e479ab7b3a38a3e0f8aa643b = MAKE_CODE_OBJECT(module_filename_obj, 305, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[77], mod_consts[77], mod_consts[200], mod_consts[200], 0, 0, 0);
    codeobj_7fac60e427a2a3d013053ea038a93418 = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[182], mod_consts[182], mod_consts[201], NULL, 4, 0, 0);
    codeobj_9207381983eed5246ea543b3c8cd0960 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[177], mod_consts[177], mod_consts[202], NULL, 7, 0, 0);
    codeobj_cf3b9272685833c10dabf8d7e5a93d5b = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[70], mod_consts[70], mod_consts[203], mod_consts[204], 1, 0, 0);
    codeobj_46e769bf08ce13ff9a2df3722ae129f1 = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[75], mod_consts[75], mod_consts[205], mod_consts[206], 0, 0, 0);
    codeobj_1617215cc81553662aca0ccdcc9a5122 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[1], mod_consts[1], NULL, NULL, 0, 0, 0);
    codeobj_5711bedfff14d0307d18792f351a899f = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[163], mod_consts[163], mod_consts[207], NULL, 5, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__10__return_none(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__1_yes_no_dialog(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__1_yes_no_dialog$$$function__1_yes_handler(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__1_yes_no_dialog$$$function__2_no_handler(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__2_button_dialog(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__2_button_dialog$$$function__1_button_handler(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__3_input_dialog(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__3_input_dialog$$$function__1_accept(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__3_input_dialog$$$function__2_ok_handler(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__4_message_dialog(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__5_radiolist_dialog(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__5_radiolist_dialog$$$function__1_ok_handler(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__6_checkboxlist_dialog(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__6_checkboxlist_dialog$$$function__1_ok_handler(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__1_set_percentage(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__2_log_text(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__3_start(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__4_pre_run(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__8_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__9__create_app(PyObject *annotations);


// The module function definitions.
static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__1_yes_no_dialog(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_title = python_pars[0];
    PyObject *par_text = python_pars[1];
    PyObject *par_yes_text = python_pars[2];
    PyObject *par_no_text = python_pars[3];
    PyObject *par_style = python_pars[4];
    PyObject *var_yes_handler = NULL;
    PyObject *var_no_handler = NULL;
    PyObject *var_dialog = NULL;
    struct Nuitka_FrameObject *frame_5711bedfff14d0307d18792f351a899f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5711bedfff14d0307d18792f351a899f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[0]);


        tmp_assign_source_1 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__1_yes_no_dialog$$$function__1_yes_handler(tmp_annotations_1);

        assert(var_yes_handler == NULL);
        var_yes_handler = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_annotations_2;
        tmp_annotations_2 = DICT_COPY(mod_consts[0]);


        tmp_assign_source_2 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__1_yes_no_dialog$$$function__2_no_handler(tmp_annotations_2);

        assert(var_no_handler == NULL);
        var_no_handler = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_5711bedfff14d0307d18792f351a899f)) {
        Py_XDECREF(cache_frame_5711bedfff14d0307d18792f351a899f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5711bedfff14d0307d18792f351a899f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5711bedfff14d0307d18792f351a899f = MAKE_FUNCTION_FRAME(tstate, codeobj_5711bedfff14d0307d18792f351a899f, module_prompt_toolkit$shortcuts$dialogs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5711bedfff14d0307d18792f351a899f->m_type_description == NULL);
    frame_5711bedfff14d0307d18792f351a899f = cache_frame_5711bedfff14d0307d18792f351a899f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5711bedfff14d0307d18792f351a899f);
    assert(Py_REFCNT(frame_5711bedfff14d0307d18792f351a899f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_3_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_title);
        tmp_kw_call_value_0_1 = par_title;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_kw_call_value_0_2 = par_text;
        tmp_kw_call_value_1_2 = Py_True;
        frame_5711bedfff14d0307d18792f351a899f->m_frame.f_lineno = 65;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[7]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 67;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_yes_text);
        tmp_kw_call_value_0_3 = par_yes_text;
        CHECK_OBJECT(var_yes_handler);
        tmp_kw_call_value_1_3 = var_yes_handler;
        frame_5711bedfff14d0307d18792f351a899f->m_frame.f_lineno = 67;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3};

            tmp_list_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[9]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 67;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_kw_call_value_0_4;
            PyObject *tmp_kw_call_value_1_4;
            PyList_SET_ITEM(tmp_kw_call_value_2_1, 0, tmp_list_element_1);
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "oooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(par_no_text);
            tmp_kw_call_value_0_4 = par_no_text;
            CHECK_OBJECT(var_no_handler);
            tmp_kw_call_value_1_4 = var_no_handler;
            frame_5711bedfff14d0307d18792f351a899f->m_frame.f_lineno = 68;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4};

                tmp_list_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[9]);
            }

            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "oooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_1, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_kw_call_value_3_1 = Py_True;
        frame_5711bedfff14d0307d18792f351a899f->m_frame.f_lineno = 63;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[10]);
        }

        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dialog == NULL);
        var_dialog = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dialog);
        tmp_args_element_value_1 = var_dialog;
        CHECK_OBJECT(par_style);
        tmp_args_element_value_2 = par_style;
        frame_5711bedfff14d0307d18792f351a899f->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_5711bedfff14d0307d18792f351a899f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5711bedfff14d0307d18792f351a899f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5711bedfff14d0307d18792f351a899f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5711bedfff14d0307d18792f351a899f,
        type_description_1,
        par_title,
        par_text,
        par_yes_text,
        par_no_text,
        par_style,
        var_yes_handler,
        var_no_handler,
        var_dialog
    );


    // Release cached frame if used for exception.
    if (frame_5711bedfff14d0307d18792f351a899f == cache_frame_5711bedfff14d0307d18792f351a899f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5711bedfff14d0307d18792f351a899f);
        cache_frame_5711bedfff14d0307d18792f351a899f = NULL;
    }

    assertFrameObject(frame_5711bedfff14d0307d18792f351a899f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_yes_handler);
    Py_DECREF(var_yes_handler);
    var_yes_handler = NULL;
    CHECK_OBJECT(var_no_handler);
    Py_DECREF(var_no_handler);
    var_no_handler = NULL;
    CHECK_OBJECT(var_dialog);
    Py_DECREF(var_dialog);
    var_dialog = NULL;
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

    CHECK_OBJECT(var_yes_handler);
    Py_DECREF(var_yes_handler);
    var_yes_handler = NULL;
    CHECK_OBJECT(var_no_handler);
    Py_DECREF(var_no_handler);
    var_no_handler = NULL;
    Py_XDECREF(var_dialog);
    var_dialog = NULL;
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
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_yes_text);
    Py_DECREF(par_yes_text);
    CHECK_OBJECT(par_no_text);
    Py_DECREF(par_no_text);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_yes_text);
    Py_DECREF(par_yes_text);
    CHECK_OBJECT(par_no_text);
    Py_DECREF(par_no_text);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__1_yes_no_dialog$$$function__1_yes_handler(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_1617215cc81553662aca0ccdcc9a5122;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1617215cc81553662aca0ccdcc9a5122 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1617215cc81553662aca0ccdcc9a5122)) {
        Py_XDECREF(cache_frame_1617215cc81553662aca0ccdcc9a5122);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1617215cc81553662aca0ccdcc9a5122 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1617215cc81553662aca0ccdcc9a5122 = MAKE_FUNCTION_FRAME(tstate, codeobj_1617215cc81553662aca0ccdcc9a5122, module_prompt_toolkit$shortcuts$dialogs, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1617215cc81553662aca0ccdcc9a5122->m_type_description == NULL);
    frame_1617215cc81553662aca0ccdcc9a5122 = cache_frame_1617215cc81553662aca0ccdcc9a5122;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1617215cc81553662aca0ccdcc9a5122);
    assert(Py_REFCNT(frame_1617215cc81553662aca0ccdcc9a5122) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        frame_1617215cc81553662aca0ccdcc9a5122->m_frame.f_lineno = 58;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        frame_1617215cc81553662aca0ccdcc9a5122->m_frame.f_lineno = 58;
        tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[15], 0), mod_consts[16]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1617215cc81553662aca0ccdcc9a5122, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1617215cc81553662aca0ccdcc9a5122->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1617215cc81553662aca0ccdcc9a5122, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1617215cc81553662aca0ccdcc9a5122,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_1617215cc81553662aca0ccdcc9a5122 == cache_frame_1617215cc81553662aca0ccdcc9a5122) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1617215cc81553662aca0ccdcc9a5122);
        cache_frame_1617215cc81553662aca0ccdcc9a5122 = NULL;
    }

    assertFrameObject(frame_1617215cc81553662aca0ccdcc9a5122);

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


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__1_yes_no_dialog$$$function__2_no_handler(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_fd4fcf8b7e36f49146cb711fc9dd1775;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fd4fcf8b7e36f49146cb711fc9dd1775 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fd4fcf8b7e36f49146cb711fc9dd1775)) {
        Py_XDECREF(cache_frame_fd4fcf8b7e36f49146cb711fc9dd1775);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fd4fcf8b7e36f49146cb711fc9dd1775 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fd4fcf8b7e36f49146cb711fc9dd1775 = MAKE_FUNCTION_FRAME(tstate, codeobj_fd4fcf8b7e36f49146cb711fc9dd1775, module_prompt_toolkit$shortcuts$dialogs, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fd4fcf8b7e36f49146cb711fc9dd1775->m_type_description == NULL);
    frame_fd4fcf8b7e36f49146cb711fc9dd1775 = cache_frame_fd4fcf8b7e36f49146cb711fc9dd1775;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fd4fcf8b7e36f49146cb711fc9dd1775);
    assert(Py_REFCNT(frame_fd4fcf8b7e36f49146cb711fc9dd1775) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        frame_fd4fcf8b7e36f49146cb711fc9dd1775->m_frame.f_lineno = 61;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        frame_fd4fcf8b7e36f49146cb711fc9dd1775->m_frame.f_lineno = 61;
        tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[17], 0), mod_consts[16]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fd4fcf8b7e36f49146cb711fc9dd1775, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fd4fcf8b7e36f49146cb711fc9dd1775->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fd4fcf8b7e36f49146cb711fc9dd1775, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fd4fcf8b7e36f49146cb711fc9dd1775,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_fd4fcf8b7e36f49146cb711fc9dd1775 == cache_frame_fd4fcf8b7e36f49146cb711fc9dd1775) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fd4fcf8b7e36f49146cb711fc9dd1775);
        cache_frame_fd4fcf8b7e36f49146cb711fc9dd1775 = NULL;
    }

    assertFrameObject(frame_fd4fcf8b7e36f49146cb711fc9dd1775);

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


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__2_button_dialog(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_title = python_pars[0];
    PyObject *par_text = python_pars[1];
    PyObject *par_buttons = python_pars[2];
    PyObject *par_style = python_pars[3];
    PyObject *var_button_handler = NULL;
    PyObject *var_dialog = NULL;
    PyObject *outline_0_var_t = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_3c07e7d15bd7103f4edec63ae659fee1;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3c07e7d15bd7103f4edec63ae659fee1 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[18]);


        tmp_assign_source_1 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__2_button_dialog$$$function__1_button_handler(tmp_annotations_1);

        assert(var_button_handler == NULL);
        var_button_handler = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_3c07e7d15bd7103f4edec63ae659fee1)) {
        Py_XDECREF(cache_frame_3c07e7d15bd7103f4edec63ae659fee1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3c07e7d15bd7103f4edec63ae659fee1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3c07e7d15bd7103f4edec63ae659fee1 = MAKE_FUNCTION_FRAME(tstate, codeobj_3c07e7d15bd7103f4edec63ae659fee1, module_prompt_toolkit$shortcuts$dialogs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3c07e7d15bd7103f4edec63ae659fee1->m_type_description == NULL);
    frame_3c07e7d15bd7103f4edec63ae659fee1 = cache_frame_3c07e7d15bd7103f4edec63ae659fee1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3c07e7d15bd7103f4edec63ae659fee1);
    assert(Py_REFCNT(frame_3c07e7d15bd7103f4edec63ae659fee1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_title);
        tmp_kw_call_value_0_1 = par_title;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_kw_call_value_0_2 = par_text;
        tmp_kw_call_value_1_2 = Py_True;
        frame_3c07e7d15bd7103f4edec63ae659fee1->m_frame.f_lineno = 95;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[7]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_buttons);
            tmp_iter_arg_1 = par_buttons;
            tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_4;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooo";
                    exception_lineno = 96;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_2 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
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


                type_description_1 = "oooooo";
                exception_lineno = 96;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
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


                type_description_1 = "oooooo";
                exception_lineno = 96;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
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

                        type_description_1 = "oooooo";
                        exception_lineno = 96;
                        goto try_except_handler_5;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[21];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_1 = "oooooo";
                exception_lineno = 96;
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

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_9 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_t;
                outline_0_var_t = tmp_assign_source_9;
                Py_INCREF(outline_0_var_t);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_10 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_10;
                Py_INCREF(outline_0_var_v);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_kw_call_value_0_3;
            PyObject *tmp_kw_call_value_1_3;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_t);
            tmp_kw_call_value_0_3 = outline_0_var_t;
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            if (var_button_handler == NULL) {
                Py_DECREF(tmp_called_value_4);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[19]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 97;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }

            tmp_args_element_value_1 = var_button_handler;
            CHECK_OBJECT(outline_0_var_v);
            tmp_args_element_value_2 = outline_0_var_v;
            frame_3c07e7d15bd7103f4edec63ae659fee1->m_frame.f_lineno = 97;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_kw_call_value_1_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
            }

            Py_DECREF(tmp_called_value_4);
            if (tmp_kw_call_value_1_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            frame_3c07e7d15bd7103f4edec63ae659fee1->m_frame.f_lineno = 97;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3};

                tmp_append_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[9]);
            }

            Py_DECREF(tmp_kw_call_value_1_3);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_kw_call_value_2_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_kw_call_value_2_1);
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
        Py_XDECREF(outline_0_var_t);
        outline_0_var_t = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
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

        Py_XDECREF(outline_0_var_t);
        outline_0_var_t = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
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
        exception_lineno = 96;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_kw_call_value_3_1 = Py_True;
        frame_3c07e7d15bd7103f4edec63ae659fee1->m_frame.f_lineno = 93;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[10]);
        }

        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dialog == NULL);
        var_dialog = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dialog);
        tmp_args_element_value_3 = var_dialog;
        CHECK_OBJECT(par_style);
        tmp_args_element_value_4 = par_style;
        frame_3c07e7d15bd7103f4edec63ae659fee1->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_3c07e7d15bd7103f4edec63ae659fee1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3c07e7d15bd7103f4edec63ae659fee1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3c07e7d15bd7103f4edec63ae659fee1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3c07e7d15bd7103f4edec63ae659fee1,
        type_description_1,
        par_title,
        par_text,
        par_buttons,
        par_style,
        var_button_handler,
        var_dialog
    );


    // Release cached frame if used for exception.
    if (frame_3c07e7d15bd7103f4edec63ae659fee1 == cache_frame_3c07e7d15bd7103f4edec63ae659fee1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3c07e7d15bd7103f4edec63ae659fee1);
        cache_frame_3c07e7d15bd7103f4edec63ae659fee1 = NULL;
    }

    assertFrameObject(frame_3c07e7d15bd7103f4edec63ae659fee1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_button_handler);
    var_button_handler = NULL;
    CHECK_OBJECT(var_dialog);
    Py_DECREF(var_dialog);
    var_dialog = NULL;
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

    Py_XDECREF(var_button_handler);
    var_button_handler = NULL;
    Py_XDECREF(var_dialog);
    var_dialog = NULL;
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
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_buttons);
    Py_DECREF(par_buttons);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_buttons);
    Py_DECREF(par_buttons);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__2_button_dialog$$$function__1_button_handler(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[0];
    struct Nuitka_FrameObject *frame_1c72cb2b0dfd3ec07339d1ff46b6e372;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1c72cb2b0dfd3ec07339d1ff46b6e372 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1c72cb2b0dfd3ec07339d1ff46b6e372)) {
        Py_XDECREF(cache_frame_1c72cb2b0dfd3ec07339d1ff46b6e372);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c72cb2b0dfd3ec07339d1ff46b6e372 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c72cb2b0dfd3ec07339d1ff46b6e372 = MAKE_FUNCTION_FRAME(tstate, codeobj_1c72cb2b0dfd3ec07339d1ff46b6e372, module_prompt_toolkit$shortcuts$dialogs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c72cb2b0dfd3ec07339d1ff46b6e372->m_type_description == NULL);
    frame_1c72cb2b0dfd3ec07339d1ff46b6e372 = cache_frame_1c72cb2b0dfd3ec07339d1ff46b6e372;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1c72cb2b0dfd3ec07339d1ff46b6e372);
    assert(Py_REFCNT(frame_1c72cb2b0dfd3ec07339d1ff46b6e372) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1c72cb2b0dfd3ec07339d1ff46b6e372->m_frame.f_lineno = 91;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_v);
        tmp_kw_call_value_0_1 = par_v;
        frame_1c72cb2b0dfd3ec07339d1ff46b6e372->m_frame.f_lineno = 91;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
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
        exception_tb = MAKE_TRACEBACK(frame_1c72cb2b0dfd3ec07339d1ff46b6e372, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c72cb2b0dfd3ec07339d1ff46b6e372->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c72cb2b0dfd3ec07339d1ff46b6e372, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c72cb2b0dfd3ec07339d1ff46b6e372,
        type_description_1,
        par_v
    );


    // Release cached frame if used for exception.
    if (frame_1c72cb2b0dfd3ec07339d1ff46b6e372 == cache_frame_1c72cb2b0dfd3ec07339d1ff46b6e372) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c72cb2b0dfd3ec07339d1ff46b6e372);
        cache_frame_1c72cb2b0dfd3ec07339d1ff46b6e372 = NULL;
    }

    assertFrameObject(frame_1c72cb2b0dfd3ec07339d1ff46b6e372);

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
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__3_input_dialog(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_title = python_pars[0];
    PyObject *par_text = python_pars[1];
    PyObject *par_ok_text = python_pars[2];
    PyObject *par_cancel_text = python_pars[3];
    PyObject *par_completer = python_pars[4];
    PyObject *par_validator = python_pars[5];
    PyObject *par_password = python_pars[6];
    PyObject *par_style = python_pars[7];
    PyObject *par_default = python_pars[8];
    PyObject *var_accept = NULL;
    PyObject *var_ok_handler = NULL;
    struct Nuitka_CellObject *var_ok_button = Nuitka_Cell_Empty();
    PyObject *var_cancel_button = NULL;
    struct Nuitka_CellObject *var_textfield = Nuitka_Cell_Empty();
    PyObject *var_dialog = NULL;
    struct Nuitka_FrameObject *frame_258d755dda6f8117c292cad8e25919ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_258d755dda6f8117c292cad8e25919ee = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_annotations_1 = DICT_COPY(mod_consts[25]);

        tmp_closure_1[0] = var_ok_button;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__3_input_dialog$$$function__1_accept(tmp_annotations_1, tmp_closure_1);

        assert(var_accept == NULL);
        var_accept = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_annotations_2;
        struct Nuitka_CellObject *tmp_closure_2[1];
        tmp_annotations_2 = DICT_COPY(mod_consts[0]);

        tmp_closure_2[0] = var_textfield;
        Py_INCREF(tmp_closure_2[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__3_input_dialog$$$function__2_ok_handler(tmp_annotations_2, tmp_closure_2);

        assert(var_ok_handler == NULL);
        var_ok_handler = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_258d755dda6f8117c292cad8e25919ee)) {
        Py_XDECREF(cache_frame_258d755dda6f8117c292cad8e25919ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_258d755dda6f8117c292cad8e25919ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_258d755dda6f8117c292cad8e25919ee = MAKE_FUNCTION_FRAME(tstate, codeobj_258d755dda6f8117c292cad8e25919ee, module_prompt_toolkit$shortcuts$dialogs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_258d755dda6f8117c292cad8e25919ee->m_type_description == NULL);
    frame_258d755dda6f8117c292cad8e25919ee = cache_frame_258d755dda6f8117c292cad8e25919ee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_258d755dda6f8117c292cad8e25919ee);
    assert(Py_REFCNT(frame_258d755dda6f8117c292cad8e25919ee) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ok_text);
        tmp_kw_call_value_0_1 = par_ok_text;
        CHECK_OBJECT(var_ok_handler);
        tmp_kw_call_value_1_1 = var_ok_handler;
        frame_258d755dda6f8117c292cad8e25919ee->m_frame.f_lineno = 129;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[9]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooococo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_ok_button) == NULL);
        PyCell_SET(var_ok_button, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cancel_text);
        tmp_kw_call_value_0_2 = par_cancel_text;
        tmp_kw_call_value_1_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_kw_call_value_1_2 == NULL)) {
            tmp_kw_call_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_kw_call_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooococo";
            goto frame_exception_exit_1;
        }
        frame_258d755dda6f8117c292cad8e25919ee->m_frame.f_lineno = 130;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[9]);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooococo";
            goto frame_exception_exit_1;
        }
        assert(var_cancel_button == NULL);
        var_cancel_button = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_default);
        tmp_kw_call_value_0_3 = par_default;
        tmp_kw_call_value_1_3 = Py_False;
        CHECK_OBJECT(par_password);
        tmp_kw_call_value_2_1 = par_password;
        CHECK_OBJECT(par_completer);
        tmp_kw_call_value_3_1 = par_completer;
        CHECK_OBJECT(par_validator);
        tmp_kw_call_value_4_1 = par_validator;
        CHECK_OBJECT(var_accept);
        tmp_kw_call_value_5_1 = var_accept;
        frame_258d755dda6f8117c292cad8e25919ee->m_frame.f_lineno = 132;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

            tmp_assign_source_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[32]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooococo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_textfield) == NULL);
        PyCell_SET(var_textfield, tmp_assign_source_5);

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_called_value_8;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_list_element_2;
        PyObject *tmp_kw_call_value_3_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_title);
        tmp_kw_call_value_0_4 = par_title;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooococo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_kw_call_value_0_5 = par_text;
        tmp_kw_call_value_1_5 = Py_True;
        frame_258d755dda6f8117c292cad8e25919ee->m_frame.f_lineno = 145;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5};

            tmp_list_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, kw_values, mod_consts[7]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooococo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_7;
            PyList_SET_ITEM(tmp_kw_call_arg_value_0_1, 0, tmp_list_element_1);
            CHECK_OBJECT(Nuitka_Cell_GET(var_textfield));
            tmp_list_element_1 = Nuitka_Cell_GET(var_textfield);
            PyList_SET_ITEM0(tmp_kw_call_arg_value_0_1, 1, tmp_list_element_1);
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_1 = "ooooooooooococo";
                goto list_build_exception_1;
            }
            frame_258d755dda6f8117c292cad8e25919ee->m_frame.f_lineno = 147;
            tmp_list_element_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_1 = "ooooooooooococo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_arg_value_0_1, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 149;
            type_description_1 = "ooooooooooococo";
            goto frame_exception_exit_1;
        }
        frame_258d755dda6f8117c292cad8e25919ee->m_frame.f_lineno = 149;
        tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[36], 0), mod_consts[37]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 149;
            type_description_1 = "ooooooooooococo";
            goto frame_exception_exit_1;
        }
        frame_258d755dda6f8117c292cad8e25919ee->m_frame.f_lineno = 143;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_kw_call_value_1_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts[38]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_kw_call_value_1_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_ok_button));
        tmp_list_element_2 = Nuitka_Cell_GET(var_ok_button);
        tmp_kw_call_value_2_2 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_kw_call_value_2_2, 0, tmp_list_element_2);
        CHECK_OBJECT(var_cancel_button);
        tmp_list_element_2 = var_cancel_button;
        PyList_SET_ITEM0(tmp_kw_call_value_2_2, 1, tmp_list_element_2);
        tmp_kw_call_value_3_2 = Py_True;
        frame_258d755dda6f8117c292cad8e25919ee->m_frame.f_lineno = 141;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2};

            tmp_assign_source_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[10]);
        }

        Py_DECREF(tmp_kw_call_value_1_4);
        Py_DECREF(tmp_kw_call_value_2_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooococo";
            goto frame_exception_exit_1;
        }
        assert(var_dialog == NULL);
        var_dialog = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dialog);
        tmp_args_element_value_1 = var_dialog;
        CHECK_OBJECT(par_style);
        tmp_args_element_value_2 = par_style;
        frame_258d755dda6f8117c292cad8e25919ee->m_frame.f_lineno = 155;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooococo";
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
        exception_tb = MAKE_TRACEBACK(frame_258d755dda6f8117c292cad8e25919ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_258d755dda6f8117c292cad8e25919ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_258d755dda6f8117c292cad8e25919ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_258d755dda6f8117c292cad8e25919ee,
        type_description_1,
        par_title,
        par_text,
        par_ok_text,
        par_cancel_text,
        par_completer,
        par_validator,
        par_password,
        par_style,
        par_default,
        var_accept,
        var_ok_handler,
        var_ok_button,
        var_cancel_button,
        var_textfield,
        var_dialog
    );


    // Release cached frame if used for exception.
    if (frame_258d755dda6f8117c292cad8e25919ee == cache_frame_258d755dda6f8117c292cad8e25919ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_258d755dda6f8117c292cad8e25919ee);
        cache_frame_258d755dda6f8117c292cad8e25919ee = NULL;
    }

    assertFrameObject(frame_258d755dda6f8117c292cad8e25919ee);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_accept);
    Py_DECREF(var_accept);
    var_accept = NULL;
    CHECK_OBJECT(var_ok_handler);
    Py_DECREF(var_ok_handler);
    var_ok_handler = NULL;
    CHECK_OBJECT(var_ok_button);
    Py_DECREF(var_ok_button);
    var_ok_button = NULL;
    CHECK_OBJECT(var_cancel_button);
    Py_DECREF(var_cancel_button);
    var_cancel_button = NULL;
    CHECK_OBJECT(var_textfield);
    Py_DECREF(var_textfield);
    var_textfield = NULL;
    CHECK_OBJECT(var_dialog);
    Py_DECREF(var_dialog);
    var_dialog = NULL;
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

    CHECK_OBJECT(var_accept);
    Py_DECREF(var_accept);
    var_accept = NULL;
    CHECK_OBJECT(var_ok_handler);
    Py_DECREF(var_ok_handler);
    var_ok_handler = NULL;
    CHECK_OBJECT(var_ok_button);
    Py_DECREF(var_ok_button);
    var_ok_button = NULL;
    Py_XDECREF(var_cancel_button);
    var_cancel_button = NULL;
    CHECK_OBJECT(var_textfield);
    Py_DECREF(var_textfield);
    var_textfield = NULL;
    Py_XDECREF(var_dialog);
    var_dialog = NULL;
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
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_ok_text);
    Py_DECREF(par_ok_text);
    CHECK_OBJECT(par_cancel_text);
    Py_DECREF(par_cancel_text);
    CHECK_OBJECT(par_completer);
    Py_DECREF(par_completer);
    CHECK_OBJECT(par_validator);
    Py_DECREF(par_validator);
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_ok_text);
    Py_DECREF(par_ok_text);
    CHECK_OBJECT(par_cancel_text);
    Py_DECREF(par_cancel_text);
    CHECK_OBJECT(par_completer);
    Py_DECREF(par_completer);
    CHECK_OBJECT(par_validator);
    Py_DECREF(par_validator);
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__3_input_dialog$$$function__1_accept(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_buf = python_pars[0];
    struct Nuitka_FrameObject *frame_7c11fade6fecaf95a5d3e27bad061476;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7c11fade6fecaf95a5d3e27bad061476 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7c11fade6fecaf95a5d3e27bad061476)) {
        Py_XDECREF(cache_frame_7c11fade6fecaf95a5d3e27bad061476);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c11fade6fecaf95a5d3e27bad061476 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c11fade6fecaf95a5d3e27bad061476 = MAKE_FUNCTION_FRAME(tstate, codeobj_7c11fade6fecaf95a5d3e27bad061476, module_prompt_toolkit$shortcuts$dialogs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7c11fade6fecaf95a5d3e27bad061476->m_type_description == NULL);
    frame_7c11fade6fecaf95a5d3e27bad061476 = cache_frame_7c11fade6fecaf95a5d3e27bad061476;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7c11fade6fecaf95a5d3e27bad061476);
    assert(Py_REFCNT(frame_7c11fade6fecaf95a5d3e27bad061476) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_7c11fade6fecaf95a5d3e27bad061476->m_frame.f_lineno = 123;
        tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[40]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[41]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[42]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 123;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_7c11fade6fecaf95a5d3e27bad061476->m_frame.f_lineno = 123;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7c11fade6fecaf95a5d3e27bad061476, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c11fade6fecaf95a5d3e27bad061476->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c11fade6fecaf95a5d3e27bad061476, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c11fade6fecaf95a5d3e27bad061476,
        type_description_1,
        par_buf,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_7c11fade6fecaf95a5d3e27bad061476 == cache_frame_7c11fade6fecaf95a5d3e27bad061476) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7c11fade6fecaf95a5d3e27bad061476);
        cache_frame_7c11fade6fecaf95a5d3e27bad061476 = NULL;
    }

    assertFrameObject(frame_7c11fade6fecaf95a5d3e27bad061476);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_buf);
    Py_DECREF(par_buf);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_buf);
    Py_DECREF(par_buf);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__3_input_dialog$$$function__2_ok_handler(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_2434ba380c050d7efe79745fdd1d855b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2434ba380c050d7efe79745fdd1d855b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2434ba380c050d7efe79745fdd1d855b)) {
        Py_XDECREF(cache_frame_2434ba380c050d7efe79745fdd1d855b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2434ba380c050d7efe79745fdd1d855b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2434ba380c050d7efe79745fdd1d855b = MAKE_FUNCTION_FRAME(tstate, codeobj_2434ba380c050d7efe79745fdd1d855b, module_prompt_toolkit$shortcuts$dialogs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2434ba380c050d7efe79745fdd1d855b->m_type_description == NULL);
    frame_2434ba380c050d7efe79745fdd1d855b = cache_frame_2434ba380c050d7efe79745fdd1d855b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2434ba380c050d7efe79745fdd1d855b);
    assert(Py_REFCNT(frame_2434ba380c050d7efe79745fdd1d855b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        frame_2434ba380c050d7efe79745fdd1d855b->m_frame.f_lineno = 127;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 127;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[44]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 127;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        frame_2434ba380c050d7efe79745fdd1d855b->m_frame.f_lineno = 127;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2434ba380c050d7efe79745fdd1d855b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2434ba380c050d7efe79745fdd1d855b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2434ba380c050d7efe79745fdd1d855b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2434ba380c050d7efe79745fdd1d855b,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_2434ba380c050d7efe79745fdd1d855b == cache_frame_2434ba380c050d7efe79745fdd1d855b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2434ba380c050d7efe79745fdd1d855b);
        cache_frame_2434ba380c050d7efe79745fdd1d855b = NULL;
    }

    assertFrameObject(frame_2434ba380c050d7efe79745fdd1d855b);

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


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__4_message_dialog(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_title = python_pars[0];
    PyObject *par_text = python_pars[1];
    PyObject *par_ok_text = python_pars[2];
    PyObject *par_style = python_pars[3];
    PyObject *var_dialog = NULL;
    struct Nuitka_FrameObject *frame_934eaed0fde5ec1d9a66d343dd456e0c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_934eaed0fde5ec1d9a66d343dd456e0c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_934eaed0fde5ec1d9a66d343dd456e0c)) {
        Py_XDECREF(cache_frame_934eaed0fde5ec1d9a66d343dd456e0c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_934eaed0fde5ec1d9a66d343dd456e0c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_934eaed0fde5ec1d9a66d343dd456e0c = MAKE_FUNCTION_FRAME(tstate, codeobj_934eaed0fde5ec1d9a66d343dd456e0c, module_prompt_toolkit$shortcuts$dialogs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_934eaed0fde5ec1d9a66d343dd456e0c->m_type_description == NULL);
    frame_934eaed0fde5ec1d9a66d343dd456e0c = cache_frame_934eaed0fde5ec1d9a66d343dd456e0c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_934eaed0fde5ec1d9a66d343dd456e0c);
    assert(Py_REFCNT(frame_934eaed0fde5ec1d9a66d343dd456e0c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_3_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_title);
        tmp_kw_call_value_0_1 = par_title;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_kw_call_value_0_2 = par_text;
        tmp_kw_call_value_1_2 = Py_True;
        frame_934eaed0fde5ec1d9a66d343dd456e0c->m_frame.f_lineno = 169;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[7]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 170;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ok_text);
        tmp_kw_call_value_0_3 = par_ok_text;
        tmp_kw_call_value_1_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_kw_call_value_1_3 == NULL)) {
            tmp_kw_call_value_1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_kw_call_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 170;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_934eaed0fde5ec1d9a66d343dd456e0c->m_frame.f_lineno = 170;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3};

            tmp_list_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[9]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 170;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_kw_call_value_2_1, 0, tmp_list_element_1);
        tmp_kw_call_value_3_1 = Py_True;
        frame_934eaed0fde5ec1d9a66d343dd456e0c->m_frame.f_lineno = 167;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[10]);
        }

        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dialog == NULL);
        var_dialog = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dialog);
        tmp_args_element_value_1 = var_dialog;
        CHECK_OBJECT(par_style);
        tmp_args_element_value_2 = par_style;
        frame_934eaed0fde5ec1d9a66d343dd456e0c->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_934eaed0fde5ec1d9a66d343dd456e0c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_934eaed0fde5ec1d9a66d343dd456e0c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_934eaed0fde5ec1d9a66d343dd456e0c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_934eaed0fde5ec1d9a66d343dd456e0c,
        type_description_1,
        par_title,
        par_text,
        par_ok_text,
        par_style,
        var_dialog
    );


    // Release cached frame if used for exception.
    if (frame_934eaed0fde5ec1d9a66d343dd456e0c == cache_frame_934eaed0fde5ec1d9a66d343dd456e0c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_934eaed0fde5ec1d9a66d343dd456e0c);
        cache_frame_934eaed0fde5ec1d9a66d343dd456e0c = NULL;
    }

    assertFrameObject(frame_934eaed0fde5ec1d9a66d343dd456e0c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_dialog);
    Py_DECREF(var_dialog);
    var_dialog = NULL;
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

    Py_XDECREF(var_dialog);
    var_dialog = NULL;
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
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_ok_text);
    Py_DECREF(par_ok_text);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_ok_text);
    Py_DECREF(par_ok_text);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__5_radiolist_dialog(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_title = python_pars[0];
    PyObject *par_text = python_pars[1];
    PyObject *par_ok_text = python_pars[2];
    PyObject *par_cancel_text = python_pars[3];
    PyObject *par_values = python_pars[4];
    PyObject *par_default = python_pars[5];
    PyObject *par_style = python_pars[6];
    PyObject *var_ok_handler = NULL;
    struct Nuitka_CellObject *var_radio_list = Nuitka_Cell_Empty();
    PyObject *var_dialog = NULL;
    struct Nuitka_FrameObject *frame_9207381983eed5246ea543b3c8cd0960;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9207381983eed5246ea543b3c8cd0960 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_values);
        tmp_cmp_expr_left_1 = par_values;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = par_values;
            assert(old != NULL);
            par_values = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_annotations_1 = DICT_COPY(mod_consts[0]);

        tmp_closure_1[0] = var_radio_list;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__5_radiolist_dialog$$$function__1_ok_handler(tmp_annotations_1, tmp_closure_1);

        assert(var_ok_handler == NULL);
        var_ok_handler = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_9207381983eed5246ea543b3c8cd0960)) {
        Py_XDECREF(cache_frame_9207381983eed5246ea543b3c8cd0960);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9207381983eed5246ea543b3c8cd0960 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9207381983eed5246ea543b3c8cd0960 = MAKE_FUNCTION_FRAME(tstate, codeobj_9207381983eed5246ea543b3c8cd0960, module_prompt_toolkit$shortcuts$dialogs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9207381983eed5246ea543b3c8cd0960->m_type_description == NULL);
    frame_9207381983eed5246ea543b3c8cd0960 = cache_frame_9207381983eed5246ea543b3c8cd0960;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9207381983eed5246ea543b3c8cd0960);
    assert(Py_REFCNT(frame_9207381983eed5246ea543b3c8cd0960) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_kw_call_value_0_1 = par_values;
        CHECK_OBJECT(par_default);
        tmp_kw_call_value_1_1 = par_default;
        frame_9207381983eed5246ea543b3c8cd0960->m_frame.f_lineno = 198;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[48]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_radio_list) == NULL);
        PyCell_SET(var_radio_list, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_3_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_title);
        tmp_kw_call_value_0_2 = par_title;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_kw_call_value_0_3 = par_text;
        tmp_kw_call_value_1_3 = Py_True;
        frame_9207381983eed5246ea543b3c8cd0960->m_frame.f_lineno = 203;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3};

            tmp_list_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[7]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM(tmp_tuple_element_1, 0, tmp_list_element_1);
        CHECK_OBJECT(Nuitka_Cell_GET(var_radio_list));
        tmp_list_element_1 = Nuitka_Cell_GET(var_radio_list);
        PyList_SET_ITEM0(tmp_tuple_element_1, 1, tmp_list_element_1);
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[49]);
        frame_9207381983eed5246ea543b3c8cd0960->m_frame.f_lineno = 202;
        tmp_kw_call_value_1_2 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_kw_call_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_2);

            exception_lineno = 207;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ok_text);
        tmp_kw_call_value_0_4 = par_ok_text;
        CHECK_OBJECT(var_ok_handler);
        tmp_kw_call_value_1_4 = var_ok_handler;
        frame_9207381983eed5246ea543b3c8cd0960->m_frame.f_lineno = 207;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4};

            tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, kw_values, mod_consts[9]);
        }

        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_2);

            exception_lineno = 207;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_kw_call_value_0_5;
            PyObject *tmp_kw_call_value_1_5;
            PyList_SET_ITEM(tmp_kw_call_value_2_1, 0, tmp_list_element_2);
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "ooooooooco";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(par_cancel_text);
            tmp_kw_call_value_0_5 = par_cancel_text;
            tmp_kw_call_value_1_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_kw_call_value_1_5 == NULL)) {
                tmp_kw_call_value_1_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_kw_call_value_1_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "ooooooooco";
                goto list_build_exception_1;
            }
            frame_9207381983eed5246ea543b3c8cd0960->m_frame.f_lineno = 208;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5};

                tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, kw_values, mod_consts[9]);
            }

            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "ooooooooco";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_1, 1, tmp_list_element_2);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_kw_call_value_1_2);
        Py_DECREF(tmp_kw_call_value_2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_kw_call_value_3_1 = Py_True;
        frame_9207381983eed5246ea543b3c8cd0960->m_frame.f_lineno = 200;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[10]);
        }

        Py_DECREF(tmp_kw_call_value_1_2);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        assert(var_dialog == NULL);
        var_dialog = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dialog);
        tmp_args_element_value_1 = var_dialog;
        CHECK_OBJECT(par_style);
        tmp_args_element_value_2 = par_style;
        frame_9207381983eed5246ea543b3c8cd0960->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooco";
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
        exception_tb = MAKE_TRACEBACK(frame_9207381983eed5246ea543b3c8cd0960, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9207381983eed5246ea543b3c8cd0960->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9207381983eed5246ea543b3c8cd0960, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9207381983eed5246ea543b3c8cd0960,
        type_description_1,
        par_title,
        par_text,
        par_ok_text,
        par_cancel_text,
        par_values,
        par_default,
        par_style,
        var_ok_handler,
        var_radio_list,
        var_dialog
    );


    // Release cached frame if used for exception.
    if (frame_9207381983eed5246ea543b3c8cd0960 == cache_frame_9207381983eed5246ea543b3c8cd0960) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9207381983eed5246ea543b3c8cd0960);
        cache_frame_9207381983eed5246ea543b3c8cd0960 = NULL;
    }

    assertFrameObject(frame_9207381983eed5246ea543b3c8cd0960);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    par_values = NULL;
    CHECK_OBJECT(var_ok_handler);
    Py_DECREF(var_ok_handler);
    var_ok_handler = NULL;
    CHECK_OBJECT(var_radio_list);
    Py_DECREF(var_radio_list);
    var_radio_list = NULL;
    CHECK_OBJECT(var_dialog);
    Py_DECREF(var_dialog);
    var_dialog = NULL;
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

    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    par_values = NULL;
    CHECK_OBJECT(var_ok_handler);
    Py_DECREF(var_ok_handler);
    var_ok_handler = NULL;
    CHECK_OBJECT(var_radio_list);
    Py_DECREF(var_radio_list);
    var_radio_list = NULL;
    Py_XDECREF(var_dialog);
    var_dialog = NULL;
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
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_ok_text);
    Py_DECREF(par_ok_text);
    CHECK_OBJECT(par_cancel_text);
    Py_DECREF(par_cancel_text);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_ok_text);
    Py_DECREF(par_ok_text);
    CHECK_OBJECT(par_cancel_text);
    Py_DECREF(par_cancel_text);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__5_radiolist_dialog$$$function__1_ok_handler(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_166db662be2546ba78c5e61a3a53101e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_166db662be2546ba78c5e61a3a53101e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_166db662be2546ba78c5e61a3a53101e)) {
        Py_XDECREF(cache_frame_166db662be2546ba78c5e61a3a53101e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_166db662be2546ba78c5e61a3a53101e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_166db662be2546ba78c5e61a3a53101e = MAKE_FUNCTION_FRAME(tstate, codeobj_166db662be2546ba78c5e61a3a53101e, module_prompt_toolkit$shortcuts$dialogs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_166db662be2546ba78c5e61a3a53101e->m_type_description == NULL);
    frame_166db662be2546ba78c5e61a3a53101e = cache_frame_166db662be2546ba78c5e61a3a53101e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_166db662be2546ba78c5e61a3a53101e);
    assert(Py_REFCNT(frame_166db662be2546ba78c5e61a3a53101e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        frame_166db662be2546ba78c5e61a3a53101e->m_frame.f_lineno = 196;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 196;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[52]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 196;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        frame_166db662be2546ba78c5e61a3a53101e->m_frame.f_lineno = 196;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_166db662be2546ba78c5e61a3a53101e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_166db662be2546ba78c5e61a3a53101e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_166db662be2546ba78c5e61a3a53101e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_166db662be2546ba78c5e61a3a53101e,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_166db662be2546ba78c5e61a3a53101e == cache_frame_166db662be2546ba78c5e61a3a53101e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_166db662be2546ba78c5e61a3a53101e);
        cache_frame_166db662be2546ba78c5e61a3a53101e = NULL;
    }

    assertFrameObject(frame_166db662be2546ba78c5e61a3a53101e);

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


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__6_checkboxlist_dialog(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_title = python_pars[0];
    PyObject *par_text = python_pars[1];
    PyObject *par_ok_text = python_pars[2];
    PyObject *par_cancel_text = python_pars[3];
    PyObject *par_values = python_pars[4];
    PyObject *par_default_values = python_pars[5];
    PyObject *par_style = python_pars[6];
    PyObject *var_ok_handler = NULL;
    struct Nuitka_CellObject *var_cb_list = Nuitka_Cell_Empty();
    PyObject *var_dialog = NULL;
    struct Nuitka_FrameObject *frame_c390f8b883d75429ff73ad0e39bfe340;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c390f8b883d75429ff73ad0e39bfe340 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_values);
        tmp_cmp_expr_left_1 = par_values;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = par_values;
            assert(old != NULL);
            par_values = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_annotations_1 = DICT_COPY(mod_consts[0]);

        tmp_closure_1[0] = var_cb_list;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__6_checkboxlist_dialog$$$function__1_ok_handler(tmp_annotations_1, tmp_closure_1);

        assert(var_ok_handler == NULL);
        var_ok_handler = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_c390f8b883d75429ff73ad0e39bfe340)) {
        Py_XDECREF(cache_frame_c390f8b883d75429ff73ad0e39bfe340);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c390f8b883d75429ff73ad0e39bfe340 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c390f8b883d75429ff73ad0e39bfe340 = MAKE_FUNCTION_FRAME(tstate, codeobj_c390f8b883d75429ff73ad0e39bfe340, module_prompt_toolkit$shortcuts$dialogs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c390f8b883d75429ff73ad0e39bfe340->m_type_description == NULL);
    frame_c390f8b883d75429ff73ad0e39bfe340 = cache_frame_c390f8b883d75429ff73ad0e39bfe340;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c390f8b883d75429ff73ad0e39bfe340);
    assert(Py_REFCNT(frame_c390f8b883d75429ff73ad0e39bfe340) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_kw_call_value_0_1 = par_values;
        CHECK_OBJECT(par_default_values);
        tmp_kw_call_value_1_1 = par_default_values;
        frame_c390f8b883d75429ff73ad0e39bfe340->m_frame.f_lineno = 237;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[55]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_cb_list) == NULL);
        PyCell_SET(var_cb_list, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_3_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_title);
        tmp_kw_call_value_0_2 = par_title;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_kw_call_value_0_3 = par_text;
        tmp_kw_call_value_1_3 = Py_True;
        frame_c390f8b883d75429ff73ad0e39bfe340->m_frame.f_lineno = 242;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3};

            tmp_list_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[7]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM(tmp_tuple_element_1, 0, tmp_list_element_1);
        CHECK_OBJECT(Nuitka_Cell_GET(var_cb_list));
        tmp_list_element_1 = Nuitka_Cell_GET(var_cb_list);
        PyList_SET_ITEM0(tmp_tuple_element_1, 1, tmp_list_element_1);
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[49]);
        frame_c390f8b883d75429ff73ad0e39bfe340->m_frame.f_lineno = 241;
        tmp_kw_call_value_1_2 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_kw_call_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_2);

            exception_lineno = 246;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ok_text);
        tmp_kw_call_value_0_4 = par_ok_text;
        CHECK_OBJECT(var_ok_handler);
        tmp_kw_call_value_1_4 = var_ok_handler;
        frame_c390f8b883d75429ff73ad0e39bfe340->m_frame.f_lineno = 246;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4};

            tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, kw_values, mod_consts[9]);
        }

        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_2);

            exception_lineno = 246;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_kw_call_value_0_5;
            PyObject *tmp_kw_call_value_1_5;
            PyList_SET_ITEM(tmp_kw_call_value_2_1, 0, tmp_list_element_2);
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_1 = "ooooooooco";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(par_cancel_text);
            tmp_kw_call_value_0_5 = par_cancel_text;
            tmp_kw_call_value_1_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_kw_call_value_1_5 == NULL)) {
                tmp_kw_call_value_1_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_kw_call_value_1_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_1 = "ooooooooco";
                goto list_build_exception_1;
            }
            frame_c390f8b883d75429ff73ad0e39bfe340->m_frame.f_lineno = 247;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5};

                tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, kw_values, mod_consts[9]);
            }

            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_1 = "ooooooooco";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_1, 1, tmp_list_element_2);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_kw_call_value_1_2);
        Py_DECREF(tmp_kw_call_value_2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_kw_call_value_3_1 = Py_True;
        frame_c390f8b883d75429ff73ad0e39bfe340->m_frame.f_lineno = 239;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[10]);
        }

        Py_DECREF(tmp_kw_call_value_1_2);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        assert(var_dialog == NULL);
        var_dialog = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dialog);
        tmp_args_element_value_1 = var_dialog;
        CHECK_OBJECT(par_style);
        tmp_args_element_value_2 = par_style;
        frame_c390f8b883d75429ff73ad0e39bfe340->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooco";
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
        exception_tb = MAKE_TRACEBACK(frame_c390f8b883d75429ff73ad0e39bfe340, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c390f8b883d75429ff73ad0e39bfe340->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c390f8b883d75429ff73ad0e39bfe340, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c390f8b883d75429ff73ad0e39bfe340,
        type_description_1,
        par_title,
        par_text,
        par_ok_text,
        par_cancel_text,
        par_values,
        par_default_values,
        par_style,
        var_ok_handler,
        var_cb_list,
        var_dialog
    );


    // Release cached frame if used for exception.
    if (frame_c390f8b883d75429ff73ad0e39bfe340 == cache_frame_c390f8b883d75429ff73ad0e39bfe340) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c390f8b883d75429ff73ad0e39bfe340);
        cache_frame_c390f8b883d75429ff73ad0e39bfe340 = NULL;
    }

    assertFrameObject(frame_c390f8b883d75429ff73ad0e39bfe340);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    par_values = NULL;
    CHECK_OBJECT(var_ok_handler);
    Py_DECREF(var_ok_handler);
    var_ok_handler = NULL;
    CHECK_OBJECT(var_cb_list);
    Py_DECREF(var_cb_list);
    var_cb_list = NULL;
    CHECK_OBJECT(var_dialog);
    Py_DECREF(var_dialog);
    var_dialog = NULL;
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

    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    par_values = NULL;
    CHECK_OBJECT(var_ok_handler);
    Py_DECREF(var_ok_handler);
    var_ok_handler = NULL;
    CHECK_OBJECT(var_cb_list);
    Py_DECREF(var_cb_list);
    var_cb_list = NULL;
    Py_XDECREF(var_dialog);
    var_dialog = NULL;
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
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_ok_text);
    Py_DECREF(par_ok_text);
    CHECK_OBJECT(par_cancel_text);
    Py_DECREF(par_cancel_text);
    CHECK_OBJECT(par_default_values);
    Py_DECREF(par_default_values);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_ok_text);
    Py_DECREF(par_ok_text);
    CHECK_OBJECT(par_cancel_text);
    Py_DECREF(par_cancel_text);
    CHECK_OBJECT(par_default_values);
    Py_DECREF(par_default_values);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__6_checkboxlist_dialog$$$function__1_ok_handler(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_c2bfcbfe671b778f5783624611507a9e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c2bfcbfe671b778f5783624611507a9e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c2bfcbfe671b778f5783624611507a9e)) {
        Py_XDECREF(cache_frame_c2bfcbfe671b778f5783624611507a9e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c2bfcbfe671b778f5783624611507a9e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c2bfcbfe671b778f5783624611507a9e = MAKE_FUNCTION_FRAME(tstate, codeobj_c2bfcbfe671b778f5783624611507a9e, module_prompt_toolkit$shortcuts$dialogs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c2bfcbfe671b778f5783624611507a9e->m_type_description == NULL);
    frame_c2bfcbfe671b778f5783624611507a9e = cache_frame_c2bfcbfe671b778f5783624611507a9e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c2bfcbfe671b778f5783624611507a9e);
    assert(Py_REFCNT(frame_c2bfcbfe671b778f5783624611507a9e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        frame_c2bfcbfe671b778f5783624611507a9e->m_frame.f_lineno = 235;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 235;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[58]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 235;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        frame_c2bfcbfe671b778f5783624611507a9e->m_frame.f_lineno = 235;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c2bfcbfe671b778f5783624611507a9e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c2bfcbfe671b778f5783624611507a9e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c2bfcbfe671b778f5783624611507a9e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c2bfcbfe671b778f5783624611507a9e,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_c2bfcbfe671b778f5783624611507a9e == cache_frame_c2bfcbfe671b778f5783624611507a9e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c2bfcbfe671b778f5783624611507a9e);
        cache_frame_c2bfcbfe671b778f5783624611507a9e = NULL;
    }

    assertFrameObject(frame_c2bfcbfe671b778f5783624611507a9e);

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


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_title = python_pars[0];
    PyObject *par_text = python_pars[1];
    struct Nuitka_CellObject *par_run_callback = Nuitka_Cell_New1(python_pars[2]);
    PyObject *par_style = python_pars[3];
    struct Nuitka_CellObject *var_loop = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_progressbar = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_text_area = Nuitka_Cell_Empty();
    PyObject *var_dialog = NULL;
    struct Nuitka_CellObject *var_app = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_set_percentage = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_log_text = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_start = Nuitka_Cell_Empty();
    PyObject *var_pre_run = NULL;
    struct Nuitka_FrameObject *frame_7fac60e427a2a3d013053ea038a93418;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7fac60e427a2a3d013053ea038a93418 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7fac60e427a2a3d013053ea038a93418)) {
        Py_XDECREF(cache_frame_7fac60e427a2a3d013053ea038a93418);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7fac60e427a2a3d013053ea038a93418 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7fac60e427a2a3d013053ea038a93418 = MAKE_FUNCTION_FRAME(tstate, codeobj_7fac60e427a2a3d013053ea038a93418, module_prompt_toolkit$shortcuts$dialogs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7fac60e427a2a3d013053ea038a93418->m_type_description == NULL);
    frame_7fac60e427a2a3d013053ea038a93418 = cache_frame_7fac60e427a2a3d013053ea038a93418;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7fac60e427a2a3d013053ea038a93418);
    assert(Py_REFCNT(frame_7fac60e427a2a3d013053ea038a93418) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        frame_7fac60e427a2a3d013053ea038a93418->m_frame.f_lineno = 267;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_loop) == NULL);
        PyCell_SET(var_loop, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        frame_7fac60e427a2a3d013053ea038a93418->m_frame.f_lineno = 268;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_progressbar) == NULL);
        PyCell_SET(var_progressbar, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = Py_False;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        frame_7fac60e427a2a3d013053ea038a93418->m_frame.f_lineno = 273;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[61], 0), mod_consts[62]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        frame_7fac60e427a2a3d013053ea038a93418->m_frame.f_lineno = 269;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[63]);
        }

        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_text_area) == NULL);
        PyCell_SET(var_text_area, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_8;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_1;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_kw_call_value_0_3 = par_text;
        frame_7fac60e427a2a3d013053ea038a93418->m_frame.f_lineno = 279;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

            tmp_args_element_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_8, kw_values, mod_consts[65]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        frame_7fac60e427a2a3d013053ea038a93418->m_frame.f_lineno = 279;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_kw_call_arg_value_0_1;
            PyObject *tmp_kw_call_dict_value_0_1;
            PyObject *tmp_called_instance_1;
            PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_1);
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_1 = "oococccocccco";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(Nuitka_Cell_GET(var_text_area));
            tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(var_text_area);
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_1 = "oococccocccco";
                goto list_build_exception_1;
            }
            frame_7fac60e427a2a3d013053ea038a93418->m_frame.f_lineno = 280;
            tmp_kw_call_dict_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_1,
                mod_consts[66],
                PyTuple_GET_ITEM(mod_consts[67], 0)
            );

            if (tmp_kw_call_dict_value_0_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_1 = "oococccocccco";
                goto list_build_exception_1;
            }
            frame_7fac60e427a2a3d013053ea038a93418->m_frame.f_lineno = 280;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_1};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts[38]);
            }

            Py_DECREF(tmp_kw_call_dict_value_0_1);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_1 = "oococccocccco";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_1, 1, tmp_list_element_1);
            CHECK_OBJECT(Nuitka_Cell_GET(var_progressbar));
            tmp_list_element_1 = Nuitka_Cell_GET(var_progressbar);
            PyList_SET_ITEM0(tmp_args_element_value_1, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_7fac60e427a2a3d013053ea038a93418->m_frame.f_lineno = 277;
        tmp_kw_call_value_0_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_title);
        tmp_kw_call_value_1_2 = par_title;
        tmp_kw_call_value_2_1 = Py_True;
        frame_7fac60e427a2a3d013053ea038a93418->m_frame.f_lineno = 276;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1};

            tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, kw_values, mod_consts[68]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        assert(var_dialog == NULL);
        var_dialog = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dialog);
        tmp_args_element_value_3 = var_dialog;
        CHECK_OBJECT(par_style);
        tmp_args_element_value_4 = par_style;
        frame_7fac60e427a2a3d013053ea038a93418->m_frame.f_lineno = 287;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_app) == NULL);
        PyCell_SET(var_app, tmp_assign_source_5);

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_annotations_1 = DICT_COPY(mod_consts[69]);

        tmp_closure_1[0] = var_app;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_progressbar;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_6 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__1_set_percentage(tmp_annotations_1, tmp_closure_1);

        assert(Nuitka_Cell_GET(var_set_percentage) == NULL);
        PyCell_SET(var_set_percentage, tmp_assign_source_6);

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_annotations_2;
        struct Nuitka_CellObject *tmp_closure_2[3];
        tmp_annotations_2 = DICT_COPY(mod_consts[72]);

        tmp_closure_2[0] = var_app;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = var_loop;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = var_text_area;
        Py_INCREF(tmp_closure_2[2]);

        tmp_assign_source_7 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__2_log_text(tmp_annotations_2, tmp_closure_2);

        assert(Nuitka_Cell_GET(var_log_text) == NULL);
        PyCell_SET(var_log_text, tmp_assign_source_7);

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_annotations_3;
        struct Nuitka_CellObject *tmp_closure_3[4];
        tmp_annotations_3 = DICT_COPY(mod_consts[0]);

        tmp_closure_3[0] = var_app;
        Py_INCREF(tmp_closure_3[0]);
        tmp_closure_3[1] = var_log_text;
        Py_INCREF(tmp_closure_3[1]);
        tmp_closure_3[2] = par_run_callback;
        Py_INCREF(tmp_closure_3[2]);
        tmp_closure_3[3] = var_set_percentage;
        Py_INCREF(tmp_closure_3[3]);

        tmp_assign_source_8 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__3_start(tmp_annotations_3, tmp_closure_3);

        assert(Nuitka_Cell_GET(var_start) == NULL);
        PyCell_SET(var_start, tmp_assign_source_8);

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_annotations_4;
        struct Nuitka_CellObject *tmp_closure_4[1];
        tmp_annotations_4 = DICT_COPY(mod_consts[0]);

        tmp_closure_4[0] = var_start;
        Py_INCREF(tmp_closure_4[0]);

        tmp_assign_source_9 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__4_pre_run(tmp_annotations_4, tmp_closure_4);

        assert(var_pre_run == NULL);
        var_pre_run = tmp_assign_source_9;
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(Nuitka_Cell_GET(var_app));
        tmp_expression_value_2 = Nuitka_Cell_GET(var_app);
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[79]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[80]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pre_run);
        tmp_args_element_value_5 = var_pre_run;
        frame_7fac60e427a2a3d013053ea038a93418->m_frame.f_lineno = 308;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oococccocccco";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7fac60e427a2a3d013053ea038a93418, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7fac60e427a2a3d013053ea038a93418->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7fac60e427a2a3d013053ea038a93418, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7fac60e427a2a3d013053ea038a93418,
        type_description_1,
        par_title,
        par_text,
        par_run_callback,
        par_style,
        var_loop,
        var_progressbar,
        var_text_area,
        var_dialog,
        var_app,
        var_set_percentage,
        var_log_text,
        var_start,
        var_pre_run
    );


    // Release cached frame if used for exception.
    if (frame_7fac60e427a2a3d013053ea038a93418 == cache_frame_7fac60e427a2a3d013053ea038a93418) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7fac60e427a2a3d013053ea038a93418);
        cache_frame_7fac60e427a2a3d013053ea038a93418 = NULL;
    }

    assertFrameObject(frame_7fac60e427a2a3d013053ea038a93418);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(Nuitka_Cell_GET(var_app));
    tmp_return_value = Nuitka_Cell_GET(var_app);
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_loop);
    Py_DECREF(var_loop);
    var_loop = NULL;
    CHECK_OBJECT(var_progressbar);
    Py_DECREF(var_progressbar);
    var_progressbar = NULL;
    CHECK_OBJECT(var_text_area);
    Py_DECREF(var_text_area);
    var_text_area = NULL;
    CHECK_OBJECT(var_dialog);
    Py_DECREF(var_dialog);
    var_dialog = NULL;
    CHECK_OBJECT(var_app);
    Py_DECREF(var_app);
    var_app = NULL;
    CHECK_OBJECT(var_set_percentage);
    Py_DECREF(var_set_percentage);
    var_set_percentage = NULL;
    CHECK_OBJECT(var_log_text);
    Py_DECREF(var_log_text);
    var_log_text = NULL;
    CHECK_OBJECT(var_start);
    Py_DECREF(var_start);
    var_start = NULL;
    CHECK_OBJECT(var_pre_run);
    Py_DECREF(var_pre_run);
    var_pre_run = NULL;
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

    CHECK_OBJECT(var_loop);
    Py_DECREF(var_loop);
    var_loop = NULL;
    CHECK_OBJECT(var_progressbar);
    Py_DECREF(var_progressbar);
    var_progressbar = NULL;
    CHECK_OBJECT(var_text_area);
    Py_DECREF(var_text_area);
    var_text_area = NULL;
    Py_XDECREF(var_dialog);
    var_dialog = NULL;
    CHECK_OBJECT(var_app);
    Py_DECREF(var_app);
    var_app = NULL;
    CHECK_OBJECT(var_set_percentage);
    Py_DECREF(var_set_percentage);
    var_set_percentage = NULL;
    CHECK_OBJECT(var_log_text);
    Py_DECREF(var_log_text);
    var_log_text = NULL;
    CHECK_OBJECT(var_start);
    Py_DECREF(var_start);
    var_start = NULL;
    Py_XDECREF(var_pre_run);
    var_pre_run = NULL;
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
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_run_callback);
    Py_DECREF(par_run_callback);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_run_callback);
    Py_DECREF(par_run_callback);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__1_set_percentage(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_cf3b9272685833c10dabf8d7e5a93d5b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_cf3b9272685833c10dabf8d7e5a93d5b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cf3b9272685833c10dabf8d7e5a93d5b)) {
        Py_XDECREF(cache_frame_cf3b9272685833c10dabf8d7e5a93d5b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf3b9272685833c10dabf8d7e5a93d5b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf3b9272685833c10dabf8d7e5a93d5b = MAKE_FUNCTION_FRAME(tstate, codeobj_cf3b9272685833c10dabf8d7e5a93d5b, module_prompt_toolkit$shortcuts$dialogs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cf3b9272685833c10dabf8d7e5a93d5b->m_type_description == NULL);
    frame_cf3b9272685833c10dabf8d7e5a93d5b = cache_frame_cf3b9272685833c10dabf8d7e5a93d5b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cf3b9272685833c10dabf8d7e5a93d5b);
    assert(Py_REFCNT(frame_cf3b9272685833c10dabf8d7e5a93d5b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_int_arg_1 = par_value;
        tmp_assattr_value_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 290;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[83], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 291;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_cf3b9272685833c10dabf8d7e5a93d5b->m_frame.f_lineno = 291;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[85]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cf3b9272685833c10dabf8d7e5a93d5b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf3b9272685833c10dabf8d7e5a93d5b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf3b9272685833c10dabf8d7e5a93d5b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf3b9272685833c10dabf8d7e5a93d5b,
        type_description_1,
        par_value,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_cf3b9272685833c10dabf8d7e5a93d5b == cache_frame_cf3b9272685833c10dabf8d7e5a93d5b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf3b9272685833c10dabf8d7e5a93d5b);
        cache_frame_cf3b9272685833c10dabf8d7e5a93d5b = NULL;
    }

    assertFrameObject(frame_cf3b9272685833c10dabf8d7e5a93d5b);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__2_log_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_6c00ed9ac9e6f9106aba3209c7d020d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6c00ed9ac9e6f9106aba3209c7d020d6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6c00ed9ac9e6f9106aba3209c7d020d6)) {
        Py_XDECREF(cache_frame_6c00ed9ac9e6f9106aba3209c7d020d6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6c00ed9ac9e6f9106aba3209c7d020d6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6c00ed9ac9e6f9106aba3209c7d020d6 = MAKE_FUNCTION_FRAME(tstate, codeobj_6c00ed9ac9e6f9106aba3209c7d020d6, module_prompt_toolkit$shortcuts$dialogs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6c00ed9ac9e6f9106aba3209c7d020d6->m_type_description == NULL);
    frame_6c00ed9ac9e6f9106aba3209c7d020d6 = cache_frame_6c00ed9ac9e6f9106aba3209c7d020d6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6c00ed9ac9e6f9106aba3209c7d020d6);
    assert(Py_REFCNT(frame_6c00ed9ac9e6f9106aba3209c7d020d6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 294;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[87]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 294;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[89]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 294;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[90]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 294;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_args_element_value_2 = par_text;
        frame_6c00ed9ac9e6f9106aba3209c7d020d6->m_frame.f_lineno = 294;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 295;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_6c00ed9ac9e6f9106aba3209c7d020d6->m_frame.f_lineno = 295;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[85]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6c00ed9ac9e6f9106aba3209c7d020d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6c00ed9ac9e6f9106aba3209c7d020d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6c00ed9ac9e6f9106aba3209c7d020d6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6c00ed9ac9e6f9106aba3209c7d020d6,
        type_description_1,
        par_text,
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_6c00ed9ac9e6f9106aba3209c7d020d6 == cache_frame_6c00ed9ac9e6f9106aba3209c7d020d6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6c00ed9ac9e6f9106aba3209c7d020d6);
        cache_frame_6c00ed9ac9e6f9106aba3209c7d020d6 = NULL;
    }

    assertFrameObject(frame_6c00ed9ac9e6f9106aba3209c7d020d6);

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
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__3_start(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_46e769bf08ce13ff9a2df3722ae129f1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    static struct Nuitka_FrameObject *cache_frame_46e769bf08ce13ff9a2df3722ae129f1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_46e769bf08ce13ff9a2df3722ae129f1)) {
        Py_XDECREF(cache_frame_46e769bf08ce13ff9a2df3722ae129f1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_46e769bf08ce13ff9a2df3722ae129f1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_46e769bf08ce13ff9a2df3722ae129f1 = MAKE_FUNCTION_FRAME(tstate, codeobj_46e769bf08ce13ff9a2df3722ae129f1, module_prompt_toolkit$shortcuts$dialogs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_46e769bf08ce13ff9a2df3722ae129f1->m_type_description == NULL);
    frame_46e769bf08ce13ff9a2df3722ae129f1 = cache_frame_46e769bf08ce13ff9a2df3722ae129f1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_46e769bf08ce13ff9a2df3722ae129f1);
    assert(Py_REFCNT(frame_46e769bf08ce13ff9a2df3722ae129f1) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 301;
            type_description_1 = "cccc";
            goto try_except_handler_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[70]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 301;
            type_description_1 = "cccc";
            goto try_except_handler_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[3]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 301;
            type_description_1 = "cccc";
            goto try_except_handler_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_46e769bf08ce13ff9a2df3722ae129f1->m_frame.f_lineno = 301;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "cccc";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_46e769bf08ce13ff9a2df3722ae129f1, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_46e769bf08ce13ff9a2df3722ae129f1, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 303;
            type_description_1 = "cccc";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_46e769bf08ce13ff9a2df3722ae129f1->m_frame.f_lineno = 303;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[14]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "cccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 300;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_46e769bf08ce13ff9a2df3722ae129f1->m_frame) frame_46e769bf08ce13ff9a2df3722ae129f1->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "cccc";
    goto try_except_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 303;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_46e769bf08ce13ff9a2df3722ae129f1->m_frame.f_lineno = 303;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[14]);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_46e769bf08ce13ff9a2df3722ae129f1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_46e769bf08ce13ff9a2df3722ae129f1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_46e769bf08ce13ff9a2df3722ae129f1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_46e769bf08ce13ff9a2df3722ae129f1,
        type_description_1,
        self->m_closure[2],
        self->m_closure[3],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_46e769bf08ce13ff9a2df3722ae129f1 == cache_frame_46e769bf08ce13ff9a2df3722ae129f1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_46e769bf08ce13ff9a2df3722ae129f1);
        cache_frame_46e769bf08ce13ff9a2df3722ae129f1 = NULL;
    }

    assertFrameObject(frame_46e769bf08ce13ff9a2df3722ae129f1);

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


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__4_pre_run(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_a828aff7e479ab7b3a38a3e0f8aa643b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a828aff7e479ab7b3a38a3e0f8aa643b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a828aff7e479ab7b3a38a3e0f8aa643b)) {
        Py_XDECREF(cache_frame_a828aff7e479ab7b3a38a3e0f8aa643b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a828aff7e479ab7b3a38a3e0f8aa643b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a828aff7e479ab7b3a38a3e0f8aa643b = MAKE_FUNCTION_FRAME(tstate, codeobj_a828aff7e479ab7b3a38a3e0f8aa643b, module_prompt_toolkit$shortcuts$dialogs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a828aff7e479ab7b3a38a3e0f8aa643b->m_type_description == NULL);
    frame_a828aff7e479ab7b3a38a3e0f8aa643b = cache_frame_a828aff7e479ab7b3a38a3e0f8aa643b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a828aff7e479ab7b3a38a3e0f8aa643b);
    assert(Py_REFCNT(frame_a828aff7e479ab7b3a38a3e0f8aa643b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 306;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_a828aff7e479ab7b3a38a3e0f8aa643b->m_frame.f_lineno = 306;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a828aff7e479ab7b3a38a3e0f8aa643b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a828aff7e479ab7b3a38a3e0f8aa643b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a828aff7e479ab7b3a38a3e0f8aa643b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a828aff7e479ab7b3a38a3e0f8aa643b,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_a828aff7e479ab7b3a38a3e0f8aa643b == cache_frame_a828aff7e479ab7b3a38a3e0f8aa643b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a828aff7e479ab7b3a38a3e0f8aa643b);
        cache_frame_a828aff7e479ab7b3a38a3e0f8aa643b = NULL;
    }

    assertFrameObject(frame_a828aff7e479ab7b3a38a3e0f8aa643b);

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


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__9__create_app(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_dialog = python_pars[0];
    PyObject *par_style = python_pars[1];
    PyObject *var_bindings = NULL;
    struct Nuitka_FrameObject *frame_9026528d3675ad227ed789a8171991b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9026528d3675ad227ed789a8171991b0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9026528d3675ad227ed789a8171991b0)) {
        Py_XDECREF(cache_frame_9026528d3675ad227ed789a8171991b0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9026528d3675ad227ed789a8171991b0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9026528d3675ad227ed789a8171991b0 = MAKE_FUNCTION_FRAME(tstate, codeobj_9026528d3675ad227ed789a8171991b0, module_prompt_toolkit$shortcuts$dialogs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9026528d3675ad227ed789a8171991b0->m_type_description == NULL);
    frame_9026528d3675ad227ed789a8171991b0 = cache_frame_9026528d3675ad227ed789a8171991b0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9026528d3675ad227ed789a8171991b0);
    assert(Py_REFCNT(frame_9026528d3675ad227ed789a8171991b0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9026528d3675ad227ed789a8171991b0->m_frame.f_lineno = 315;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_bindings == NULL);
        var_bindings = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_bindings);
        tmp_called_instance_1 = var_bindings;
        frame_9026528d3675ad227ed789a8171991b0->m_frame.f_lineno = 316;
        tmp_called_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[94],
            PyTuple_GET_ITEM(mod_consts[95], 0)
        );

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 316;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9026528d3675ad227ed789a8171991b0->m_frame.f_lineno = 316;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_bindings);
        tmp_called_instance_2 = var_bindings;
        frame_9026528d3675ad227ed789a8171991b0->m_frame.f_lineno = 317;
        tmp_called_value_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[94],
            PyTuple_GET_ITEM(mod_consts[97], 0)
        );

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 317;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9026528d3675ad227ed789a8171991b0->m_frame.f_lineno = 317;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dialog);
        tmp_args_element_value_3 = par_dialog;
        frame_9026528d3675ad227ed789a8171991b0->m_frame.f_lineno = 320;
        tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 321;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 321;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9026528d3675ad227ed789a8171991b0->m_frame.f_lineno = 321;
        tmp_list_element_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 321;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM(tmp_args_element_value_4, 0, tmp_list_element_1);
        CHECK_OBJECT(var_bindings);
        tmp_list_element_1 = var_bindings;
        PyList_SET_ITEM0(tmp_args_element_value_4, 1, tmp_list_element_1);
        frame_9026528d3675ad227ed789a8171991b0->m_frame.f_lineno = 321;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 321;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = Py_True;
        CHECK_OBJECT(par_style);
        tmp_kw_call_value_3_1 = par_style;
        tmp_kw_call_value_4_1 = Py_True;
        frame_9026528d3675ad227ed789a8171991b0->m_frame.f_lineno = 319;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[103]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_9026528d3675ad227ed789a8171991b0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9026528d3675ad227ed789a8171991b0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9026528d3675ad227ed789a8171991b0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9026528d3675ad227ed789a8171991b0,
        type_description_1,
        par_dialog,
        par_style,
        var_bindings
    );


    // Release cached frame if used for exception.
    if (frame_9026528d3675ad227ed789a8171991b0 == cache_frame_9026528d3675ad227ed789a8171991b0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9026528d3675ad227ed789a8171991b0);
        cache_frame_9026528d3675ad227ed789a8171991b0 = NULL;
    }

    assertFrameObject(frame_9026528d3675ad227ed789a8171991b0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_bindings);
    Py_DECREF(var_bindings);
    var_bindings = NULL;
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

    Py_XDECREF(var_bindings);
    var_bindings = NULL;
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
    CHECK_OBJECT(par_dialog);
    Py_DECREF(par_dialog);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dialog);
    Py_DECREF(par_dialog);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$shortcuts$dialogs$$$function__10__return_none(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_b37f09282629b4fd158328b460fa006b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b37f09282629b4fd158328b460fa006b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b37f09282629b4fd158328b460fa006b)) {
        Py_XDECREF(cache_frame_b37f09282629b4fd158328b460fa006b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b37f09282629b4fd158328b460fa006b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b37f09282629b4fd158328b460fa006b = MAKE_FUNCTION_FRAME(tstate, codeobj_b37f09282629b4fd158328b460fa006b, module_prompt_toolkit$shortcuts$dialogs, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b37f09282629b4fd158328b460fa006b->m_type_description == NULL);
    frame_b37f09282629b4fd158328b460fa006b = cache_frame_b37f09282629b4fd158328b460fa006b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b37f09282629b4fd158328b460fa006b);
    assert(Py_REFCNT(frame_b37f09282629b4fd158328b460fa006b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        frame_b37f09282629b4fd158328b460fa006b->m_frame.f_lineno = 330;
        tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        frame_b37f09282629b4fd158328b460fa006b->m_frame.f_lineno = 330;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[14]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b37f09282629b4fd158328b460fa006b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b37f09282629b4fd158328b460fa006b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b37f09282629b4fd158328b460fa006b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b37f09282629b4fd158328b460fa006b,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_b37f09282629b4fd158328b460fa006b == cache_frame_b37f09282629b4fd158328b460fa006b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b37f09282629b4fd158328b460fa006b);
        cache_frame_b37f09282629b4fd158328b460fa006b = NULL;
    }

    assertFrameObject(frame_b37f09282629b4fd158328b460fa006b);

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



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__10__return_none(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__10__return_none,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b37f09282629b4fd158328b460fa006b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        mod_consts[104],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__1_yes_no_dialog(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__1_yes_no_dialog,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5711bedfff14d0307d18792f351a899f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__1_yes_no_dialog$$$function__1_yes_handler(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__1_yes_no_dialog$$$function__1_yes_handler,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[2],
#endif
        codeobj_1617215cc81553662aca0ccdcc9a5122,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__1_yes_no_dialog$$$function__2_no_handler(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__1_yes_no_dialog$$$function__2_no_handler,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[4],
#endif
        codeobj_fd4fcf8b7e36f49146cb711fc9dd1775,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__2_button_dialog(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__2_button_dialog,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3c07e7d15bd7103f4edec63ae659fee1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__2_button_dialog$$$function__1_button_handler(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__2_button_dialog$$$function__1_button_handler,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[20],
#endif
        codeobj_1c72cb2b0dfd3ec07339d1ff46b6e372,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__3_input_dialog(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__3_input_dialog,
        mod_consts[171],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_258d755dda6f8117c292cad8e25919ee,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        mod_consts[39],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__3_input_dialog$$$function__1_accept(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__3_input_dialog$$$function__1_accept,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[27],
#endif
        codeobj_7c11fade6fecaf95a5d3e27bad061476,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__3_input_dialog$$$function__2_ok_handler(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__3_input_dialog$$$function__2_ok_handler,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[29],
#endif
        codeobj_2434ba380c050d7efe79745fdd1d855b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__4_message_dialog(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__4_message_dialog,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_934eaed0fde5ec1d9a66d343dd456e0c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        mod_consts[45],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__5_radiolist_dialog(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__5_radiolist_dialog,
        mod_consts[177],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9207381983eed5246ea543b3c8cd0960,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        mod_consts[50],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__5_radiolist_dialog$$$function__1_ok_handler(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__5_radiolist_dialog$$$function__1_ok_handler,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[46],
#endif
        codeobj_166db662be2546ba78c5e61a3a53101e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__6_checkboxlist_dialog(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__6_checkboxlist_dialog,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c390f8b883d75429ff73ad0e39bfe340,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        mod_consts[56],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__6_checkboxlist_dialog$$$function__1_ok_handler(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__6_checkboxlist_dialog$$$function__1_ok_handler,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[53],
#endif
        codeobj_c2bfcbfe671b778f5783624611507a9e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog,
        mod_consts[182],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7fac60e427a2a3d013053ea038a93418,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        mod_consts[81],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__1_set_percentage(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__1_set_percentage,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_cf3b9272685833c10dabf8d7e5a93d5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__2_log_text(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__2_log_text,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        mod_consts[74],
#endif
        codeobj_6c00ed9ac9e6f9106aba3209c7d020d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__3_start(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__3_start,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[76],
#endif
        codeobj_46e769bf08ce13ff9a2df3722ae129f1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__4_pre_run(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__4_pre_run,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_a828aff7e479ab7b3a38a3e0f8aa643b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__8_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3f59bc567badb9861e981f4a814c16db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__9__create_app(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$shortcuts$dialogs$$$function__9__create_app,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9026528d3675ad227ed789a8171991b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$shortcuts$dialogs,
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

static function_impl_code const function_table_prompt_toolkit$shortcuts$dialogs[] = {
    impl_prompt_toolkit$shortcuts$dialogs$$$function__1_yes_no_dialog$$$function__1_yes_handler,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__1_yes_no_dialog$$$function__2_no_handler,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__2_button_dialog$$$function__1_button_handler,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__3_input_dialog$$$function__1_accept,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__3_input_dialog$$$function__2_ok_handler,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__5_radiolist_dialog$$$function__1_ok_handler,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__6_checkboxlist_dialog$$$function__1_ok_handler,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__1_set_percentage,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__2_log_text,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__3_start,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog$$$function__4_pre_run,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__1_yes_no_dialog,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__2_button_dialog,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__3_input_dialog,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__4_message_dialog,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__5_radiolist_dialog,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__6_checkboxlist_dialog,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__9__create_app,
    impl_prompt_toolkit$shortcuts$dialogs$$$function__10__return_none,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_prompt_toolkit$shortcuts$dialogs);

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
        module_prompt_toolkit$shortcuts$dialogs,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_prompt_toolkit$shortcuts$dialogs,
        sizeof(function_table_prompt_toolkit$shortcuts$dialogs) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_prompt_toolkit$shortcuts$dialogs(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("prompt_toolkit$shortcuts$dialogs");

    // Store the module for future use.
    module_prompt_toolkit$shortcuts$dialogs = module;

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
        PRINT_STRING("prompt_toolkit$shortcuts$dialogs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("prompt_toolkit$shortcuts$dialogs: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initprompt_toolkit$shortcuts$dialogs\n");

    moduledict_prompt_toolkit$shortcuts$dialogs = MODULE_DICT(module_prompt_toolkit$shortcuts$dialogs);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_prompt_toolkit$shortcuts$dialogs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$shortcuts$dialogs,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[166]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$shortcuts$dialogs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$shortcuts$dialogs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$shortcuts$dialogs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_prompt_toolkit$shortcuts$dialogs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_prompt_toolkit$shortcuts$dialogs);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    struct Nuitka_FrameObject *frame_b35bd95f21877793943eee00edbf7ed7;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_2);
    }
    frame_b35bd95f21877793943eee00edbf7ed7 = MAKE_MODULE_FRAME(codeobj_b35bd95f21877793943eee00edbf7ed7, module_prompt_toolkit$shortcuts$dialogs);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b35bd95f21877793943eee00edbf7ed7);
    assert(Py_REFCNT(frame_b35bd95f21877793943eee00edbf7ed7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[108], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[109], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[111]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_FUNCTOOLS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[112];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[113];
        tmp_level_value_1 = mod_consts[114];
        frame_b35bd95f21877793943eee00edbf7ed7->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[59],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[59]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_7 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_7);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[115],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[115]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[116],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[116]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[117],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[117]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_10);
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
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[118],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[118]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_11);
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
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[119];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[120];
        tmp_level_value_2 = mod_consts[114];
        frame_b35bd95f21877793943eee00edbf7ed7->m_frame.f_lineno = 7;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[99],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[99]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[121];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[122];
        tmp_level_value_3 = mod_consts[114];
        frame_b35bd95f21877793943eee00edbf7ed7->m_frame.f_lineno = 8;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[13],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[123];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[124];
        tmp_level_value_4 = mod_consts[114];
        frame_b35bd95f21877793943eee00edbf7ed7->m_frame.f_lineno = 9;
        tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[125],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[125]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[126];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[127];
        tmp_level_value_5 = mod_consts[114];
        frame_b35bd95f21877793943eee00edbf7ed7->m_frame.f_lineno = 10;
        tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[128],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[128]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[129];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[130];
        tmp_level_value_6 = mod_consts[114];
        frame_b35bd95f21877793943eee00edbf7ed7->m_frame.f_lineno = 11;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[92],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[92]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[131];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[132];
        tmp_level_value_7 = mod_consts[114];
        frame_b35bd95f21877793943eee00edbf7ed7->m_frame.f_lineno = 12;
        tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[133],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[133]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[134];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[135];
        tmp_level_value_8 = mod_consts[114];
        frame_b35bd95f21877793943eee00edbf7ed7->m_frame.f_lineno = 13;
        tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[136],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[136]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[137];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[138];
        tmp_level_value_9 = mod_consts[114];
        frame_b35bd95f21877793943eee00edbf7ed7->m_frame.f_lineno = 14;
        tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[96],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[96]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[98],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[98]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_21);
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[139];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[140];
        tmp_level_value_10 = mod_consts[114];
        frame_b35bd95f21877793943eee00edbf7ed7->m_frame.f_lineno = 15;
        tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[102],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[102]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[141];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[142];
        tmp_level_value_11 = mod_consts[114];
        frame_b35bd95f21877793943eee00edbf7ed7->m_frame.f_lineno = 16;
        tmp_assign_source_23 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_16 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[93],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[93]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_17 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[101],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[101]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_25);
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

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[143];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[144];
        tmp_level_value_12 = mod_consts[114];
        frame_b35bd95f21877793943eee00edbf7ed7->m_frame.f_lineno = 17;
        tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_18,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[100],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[100]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[145];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[146];
        tmp_level_value_13 = mod_consts[114];
        frame_b35bd95f21877793943eee00edbf7ed7->m_frame.f_lineno = 18;
        tmp_assign_source_27 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_27;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_19 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_19,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[147],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[147]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_20 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_20,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[33],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[33]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_29);
    }
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

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[148];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[149];
        tmp_level_value_14 = mod_consts[114];
        frame_b35bd95f21877793943eee00edbf7ed7->m_frame.f_lineno = 19;
        tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_21,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[150],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts[150]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[151];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[152];
        tmp_level_value_15 = mod_consts[114];
        frame_b35bd95f21877793943eee00edbf7ed7->m_frame.f_lineno = 20;
        tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_import_name_from_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_22,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[153],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts[153]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[154];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[155];
        tmp_level_value_16 = mod_consts[114];
        frame_b35bd95f21877793943eee00edbf7ed7->m_frame.f_lineno = 21;
        tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_23,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[156],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts[156]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[157];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[158];
        tmp_level_value_17 = mod_consts[114];
        frame_b35bd95f21877793943eee00edbf7ed7->m_frame.f_lineno = 22;
        tmp_assign_source_33 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_33;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_24 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_24,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[64],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts[64]);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_25 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_25,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[8],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts[8]);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_26 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_26,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[54],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts[54]);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_27 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_27,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[5],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts[5]);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_28 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_28,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[6],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts[6]);
        }

        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_29 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_29,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[60],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts[60]);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_30 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_30,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[47],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts[47]);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_31 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_31,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[31],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts[31]);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_32 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_32,
                (PyObject *)moduledict_prompt_toolkit$shortcuts$dialogs,
                mod_consts[34],
                mod_consts[114]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts[34]);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_42);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_LIST7(mod_consts[159]);
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_1;
        tmp_defaults_1 = mod_consts[161];
        tmp_annotations_1 = DICT_COPY(mod_consts[162]);
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_44 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__1_yes_no_dialog(tmp_defaults_1, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        frame_b35bd95f21877793943eee00edbf7ed7->m_frame.f_lineno = 76;
        tmp_assign_source_45 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[164]);

        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_45);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b35bd95f21877793943eee00edbf7ed7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b35bd95f21877793943eee00edbf7ed7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b35bd95f21877793943eee00edbf7ed7, exception_lineno);
    }



    assertFrameObject(frame_b35bd95f21877793943eee00edbf7ed7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_annotations_2;
        tmp_tuple_element_1 = mod_consts[166];
        tmp_defaults_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[166];
        PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = MAKE_LIST_EMPTY(0);
        PyTuple_SET_ITEM(tmp_defaults_2, 2, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_2, 3, tmp_tuple_element_1);
        tmp_annotations_2 = DICT_COPY(mod_consts[167]);


        tmp_assign_source_46 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__2_button_dialog(tmp_defaults_2, tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_defaults_3;
        PyObject *tmp_annotations_3;
        tmp_defaults_3 = mod_consts[169];
        tmp_annotations_3 = DICT_COPY(mod_consts[170]);
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_47 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__3_input_dialog(tmp_defaults_3, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_defaults_4;
        PyObject *tmp_annotations_4;
        tmp_defaults_4 = mod_consts[172];
        tmp_annotations_4 = DICT_COPY(mod_consts[173]);
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_48 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__4_message_dialog(tmp_defaults_4, tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_defaults_5;
        PyObject *tmp_annotations_5;
        tmp_defaults_5 = mod_consts[175];
        tmp_annotations_5 = DICT_COPY(mod_consts[176]);
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_49 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__5_radiolist_dialog(tmp_defaults_5, tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_defaults_6;
        PyObject *tmp_annotations_6;
        tmp_defaults_6 = mod_consts[175];
        tmp_annotations_6 = DICT_COPY(mod_consts[178]);
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_50 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__6_checkboxlist_dialog(tmp_defaults_6, tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_defaults_7;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_annotations_7;
        tmp_tuple_element_2 = mod_consts[166];
        tmp_defaults_7 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_defaults_7, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[166];
        PyTuple_SET_ITEM0(tmp_defaults_7, 1, tmp_tuple_element_2);


        tmp_tuple_element_2 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__8_lambda();

        PyTuple_SET_ITEM(tmp_defaults_7, 2, tmp_tuple_element_2);
        tmp_tuple_element_2 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_7, 3, tmp_tuple_element_2);
        tmp_annotations_7 = DICT_COPY(mod_consts[181]);


        tmp_assign_source_51 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__7_progress_dialog(tmp_defaults_7, tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_annotations_8;
        tmp_annotations_8 = DICT_COPY(mod_consts[183]);


        tmp_assign_source_52 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__9__create_app(tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_annotations_9;
        tmp_annotations_9 = DICT_COPY(mod_consts[0]);


        tmp_assign_source_53 = MAKE_FUNCTION_prompt_toolkit$shortcuts$dialogs$$$function__10__return_none(tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_53);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("prompt_toolkit$shortcuts$dialogs", false);

    Py_INCREF(module_prompt_toolkit$shortcuts$dialogs);
    return module_prompt_toolkit$shortcuts$dialogs;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$shortcuts$dialogs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("prompt_toolkit$shortcuts$dialogs", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
