/* Generated code for Python module 'prompt_toolkit$key_binding$bindings$emacs'
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

/* The "module_prompt_toolkit$key_binding$bindings$emacs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_prompt_toolkit$key_binding$bindings$emacs;
PyDictObject *moduledict_prompt_toolkit$key_binding$bindings$emacs;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[405];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[405];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("prompt_toolkit.key_binding.bindings.emacs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 405; i++) {
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
void checkModuleConstants_prompt_toolkit$key_binding$bindings$emacs(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 405; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_fc8c9d855b2f6073d2edfd877307bcca;
static PyCodeObject *codeobj_a42904e0e3249d35e8f12a1cc4a835c0;
static PyCodeObject *codeobj_4bd7eb079a1e5861767f97dee115ef65;
static PyCodeObject *codeobj_cb174381916fe3e67a5dfaf92a8c6a8c;
static PyCodeObject *codeobj_b9395d1cbea5a52d8b21bb3f1c6f305b;
static PyCodeObject *codeobj_3086ccc58ee582fff6dd82e0e0b29c23;
static PyCodeObject *codeobj_0b7f5df186f595969f731e55c75da9c9;
static PyCodeObject *codeobj_f9a28bc1b4f1e82fba3d9e86d6f87e07;
static PyCodeObject *codeobj_3d85267377fe62d033b889b60fb27539;
static PyCodeObject *codeobj_77e0a3a0e7e44148dc17152e5f0b3cbd;
static PyCodeObject *codeobj_50548cce560e2155aacf4f7270dff7f4;
static PyCodeObject *codeobj_438b5f33ad70432c0c9c4a39f34fbe23;
static PyCodeObject *codeobj_b7dc4e9e9e4aa32a2c2aea84c8996524;
static PyCodeObject *codeobj_0de59c26723fb97f87b13d82cb791dba;
static PyCodeObject *codeobj_7561183d1eb910f4680b3c734a8e1593;
static PyCodeObject *codeobj_d97d012058dcc15fde7fc7952b74288a;
static PyCodeObject *codeobj_3371ee90141cc5f57a199cc662fa6471;
static PyCodeObject *codeobj_a9a514533e56ba2360e9795b996bfd7f;
static PyCodeObject *codeobj_8900067fe36cdfa65714f06cfbbc4514;
static PyCodeObject *codeobj_f9e7a7fb98423c57aa4d43b4cf3b414b;
static PyCodeObject *codeobj_e3e7281b4b9a37d9dc6043358587445d;
static PyCodeObject *codeobj_ec1374382ec8daf14241ea547ca5baee;
static PyCodeObject *codeobj_53df876690609b3220b229e5a23cd329;
static PyCodeObject *codeobj_4baebec551a02447d4e00e5ac986a857;
static PyCodeObject *codeobj_f303bfa448c3a2a66649e9232188f7a0;
static PyCodeObject *codeobj_2cc95d8de8225c6438893680b09b059f;
static PyCodeObject *codeobj_85d5e512c3f744df725ee7a5838c8168;
static PyCodeObject *codeobj_c64fd31345fbc17adf1d13a24b21ad07;
static PyCodeObject *codeobj_e792dbaf54ff81ca03a6e481567f66e5;
static PyCodeObject *codeobj_bfd327b7e538eb4a7e7d2cdb62ae09f4;
static PyCodeObject *codeobj_e8adf8b6b5f22e5049899278a4f55f34;
static PyCodeObject *codeobj_032208caabe41cc9d5aec26542d2347d;
static PyCodeObject *codeobj_c1caf5953294861b72f5ed7bc4c9b8bd;
static PyCodeObject *codeobj_f079d9d07a36df5ee305427335facfa8;
static PyCodeObject *codeobj_e731c537f0eb68afd9ceb730b9316cd6;
static PyCodeObject *codeobj_35615be4b33fdaec6ae64ebd77ca4cf7;
static PyCodeObject *codeobj_1fedd58362c36905b40b71523db3a813;
static PyCodeObject *codeobj_6c312a4a8bbb23d1f1f1f711ebeb99b6;
static PyCodeObject *codeobj_4c78c11c801cb397ffb7238731b2c300;
static PyCodeObject *codeobj_41d4b755992caba765f3baa252646069;
static PyCodeObject *codeobj_4087cdc8c5f9cc377ec83ea731071b54;
static PyCodeObject *codeobj_af9079d33d20ecd21c0ad45ec7e538ec;
static PyCodeObject *codeobj_c739f1e05f5c428c8b7a05480ecd2474;
static PyCodeObject *codeobj_37fcf8236a8fd150bc418ca6c70b0005;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[379]); CHECK_OBJECT(module_filename_obj);
    codeobj_fc8c9d855b2f6073d2edfd877307bcca = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[211], mod_consts[211], mod_consts[380], NULL, 1, 0, 0);
    codeobj_a42904e0e3249d35e8f12a1cc4a835c0 = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[46], mod_consts[46], NULL, NULL, 0, 0, 0);
    codeobj_4bd7eb079a1e5861767f97dee115ef65 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[46], mod_consts[46], mod_consts[381], NULL, 1, 0, 0);
    codeobj_cb174381916fe3e67a5dfaf92a8c6a8c = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[46], mod_consts[46], mod_consts[381], NULL, 1, 0, 0);
    codeobj_b9395d1cbea5a52d8b21bb3f1c6f305b = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[382], mod_consts[382], NULL, NULL, 0, 0, 0);
    codeobj_3086ccc58ee582fff6dd82e0e0b29c23 = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[186], mod_consts[186], mod_consts[383], mod_consts[384], 1, 0, 0);
    codeobj_0b7f5df186f595969f731e55c75da9c9 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[143], mod_consts[143], mod_consts[385], NULL, 1, 0, 0);
    codeobj_f9a28bc1b4f1e82fba3d9e86d6f87e07 = MAKE_CODE_OBJECT(module_filename_obj, 548, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[143], mod_consts[143], mod_consts[386], NULL, 1, 0, 0);
    codeobj_3d85267377fe62d033b889b60fb27539 = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[146], mod_consts[146], mod_consts[385], NULL, 1, 0, 0);
    codeobj_77e0a3a0e7e44148dc17152e5f0b3cbd = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[167], mod_consts[167], mod_consts[387], NULL, 1, 0, 0);
    codeobj_50548cce560e2155aacf4f7270dff7f4 = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[155], mod_consts[155], mod_consts[388], NULL, 1, 0, 0);
    codeobj_438b5f33ad70432c0c9c4a39f34fbe23 = MAKE_CODE_OBJECT(module_filename_obj, 258, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[151], mod_consts[151], mod_consts[388], NULL, 1, 0, 0);
    codeobj_b7dc4e9e9e4aa32a2c2aea84c8996524 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[95], mod_consts[95], mod_consts[385], NULL, 1, 0, 0);
    codeobj_0de59c26723fb97f87b13d82cb791dba = MAKE_CODE_OBJECT(module_filename_obj, 521, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[299], mod_consts[299], mod_consts[385], NULL, 1, 0, 0);
    codeobj_7561183d1eb910f4680b3c734a8e1593 = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_FUTURE_ANNOTATIONS, mod_consts[123], mod_consts[123], mod_consts[385], NULL, 1, 0, 0);
    codeobj_d97d012058dcc15fde7fc7952b74288a = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_FUTURE_ANNOTATIONS, mod_consts[6], mod_consts[6], mod_consts[385], NULL, 1, 0, 0);
    codeobj_3371ee90141cc5f57a199cc662fa6471 = MAKE_CODE_OBJECT(module_filename_obj, 491, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[289], mod_consts[289], mod_consts[389], mod_consts[390], 1, 0, 0);
    codeobj_a9a514533e56ba2360e9795b996bfd7f = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[111], mod_consts[111], mod_consts[391], mod_consts[392], 1, 0, 0);
    codeobj_8900067fe36cdfa65714f06cfbbc4514 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[115], mod_consts[115], mod_consts[391], mod_consts[392], 1, 0, 0);
    codeobj_f9e7a7fb98423c57aa4d43b4cf3b414b = MAKE_CODE_OBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[171], mod_consts[171], mod_consts[393], NULL, 1, 0, 0);
    codeobj_e3e7281b4b9a37d9dc6043358587445d = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[131], mod_consts[131], mod_consts[394], NULL, 1, 0, 0);
    codeobj_ec1374382ec8daf14241ea547ca5baee = MAKE_CODE_OBJECT(module_filename_obj, 384, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[263], mod_consts[263], mod_consts[385], NULL, 1, 0, 0);
    codeobj_53df876690609b3220b229e5a23cd329 = MAKE_CODE_OBJECT(module_filename_obj, 393, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[267], mod_consts[267], mod_consts[385], NULL, 1, 0, 0);
    codeobj_4baebec551a02447d4e00e5ac986a857 = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[90], mod_consts[90], mod_consts[385], NULL, 1, 0, 0);
    codeobj_f303bfa448c3a2a66649e9232188f7a0 = MAKE_CODE_OBJECT(module_filename_obj, 513, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[295], mod_consts[295], mod_consts[385], NULL, 1, 0, 0);
    codeobj_2cc95d8de8225c6438893680b09b059f = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[76], mod_consts[76], mod_consts[385], NULL, 1, 0, 0);
    codeobj_85d5e512c3f744df725ee7a5838c8168 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[80], mod_consts[80], mod_consts[385], NULL, 1, 0, 0);
    codeobj_c64fd31345fbc17adf1d13a24b21ad07 = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_FUTURE_ANNOTATIONS, mod_consts[119], mod_consts[119], mod_consts[385], NULL, 1, 0, 0);
    codeobj_e792dbaf54ff81ca03a6e481567f66e5 = MAKE_CODE_OBJECT(module_filename_obj, 505, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[292], mod_consts[292], mod_consts[385], NULL, 1, 0, 0);
    codeobj_bfd327b7e538eb4a7e7d2cdb62ae09f4 = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[163], mod_consts[163], mod_consts[395], NULL, 1, 0, 0);
    codeobj_e8adf8b6b5f22e5049899278a4f55f34 = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[159], mod_consts[159], mod_consts[395], NULL, 1, 0, 0);
    codeobj_032208caabe41cc9d5aec26542d2347d = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[139], mod_consts[139], mod_consts[396], NULL, 1, 0, 0);
    codeobj_c1caf5953294861b72f5ed7bc4c9b8bd = MAKE_CODE_OBJECT(module_filename_obj, 459, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[139], mod_consts[139], mod_consts[397], mod_consts[390], 1, 0, 0);
    codeobj_f079d9d07a36df5ee305427335facfa8 = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_FUTURE_ANNOTATIONS, mod_consts[127], mod_consts[127], mod_consts[385], NULL, 1, 0, 0);
    codeobj_e731c537f0eb68afd9ceb730b9316cd6 = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[135], mod_consts[135], mod_consts[395], NULL, 1, 0, 0);
    codeobj_35615be4b33fdaec6ae64ebd77ca4cf7 = MAKE_CODE_OBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[175], mod_consts[175], mod_consts[393], NULL, 1, 0, 0);
    codeobj_1fedd58362c36905b40b71523db3a813 = MAKE_CODE_OBJECT(module_filename_obj, 528, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[302], mod_consts[302], mod_consts[396], NULL, 1, 0, 0);
    codeobj_6c312a4a8bbb23d1f1f1f711ebeb99b6 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[105], mod_consts[105], mod_consts[398], NULL, 3, 0, 0);
    codeobj_4c78c11c801cb397ffb7238731b2c300 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[84], mod_consts[84], mod_consts[399], mod_consts[400], 1, 0, 0);
    codeobj_41d4b755992caba765f3baa252646069 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[98], mod_consts[98], NULL, NULL, 0, 0, 0);
    codeobj_4087cdc8c5f9cc377ec83ea731071b54 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[373], mod_consts[373], mod_consts[401], NULL, 0, 0, 0);
    codeobj_af9079d33d20ecd21c0ad45ec7e538ec = MAKE_CODE_OBJECT(module_filename_obj, 338, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[374], mod_consts[374], mod_consts[402], NULL, 0, 0, 0);
    codeobj_c739f1e05f5c428c8b7a05480ecd2474 = MAKE_CODE_OBJECT(module_filename_obj, 404, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[375], mod_consts[375], mod_consts[403], NULL, 0, 0, 0);
    codeobj_37fcf8236a8fd150bc418ca6c70b0005 = MAKE_CODE_OBJECT(module_filename_obj, 412, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[273], mod_consts[273], mod_consts[404], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__17__insert_all_completions$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__10_is_returnable(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__11_character_search(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__12__goto_char(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__13__goto_char_backwards(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__14__prev_sentence(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__15__end_of_sentence(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__16__swap_characters(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__17__insert_all_completions(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__18__toggle_start_end(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__19__start_selection(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__1__esc(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__20__cancel(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__21__cancel_selection(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__22__cut(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__23__copy(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__24__start_of_word(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__25__start_next_word(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__26__complete(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__27__indent(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__28__unindent(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__2_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__3_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__4__next(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__5__prev(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__6_handle_digit(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__6_handle_digit$$$function__1__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__7__meta_dash(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__8_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__9__dash(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__2_load_emacs_search_bindings(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__2_load_emacs_search_bindings$$$function__1__jump_next(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__2_load_emacs_search_bindings$$$function__2__jump_prev(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__1_unshift_move(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__2__start_selection(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__3__extend_selection(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__4__replace_selection(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__5__newline(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__6__delete(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__7__yank(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__8__cancel(PyObject *annotations);


// The module function definitions.
static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_key_bindings = NULL;
    struct Nuitka_CellObject *var_handle = Nuitka_Cell_Empty();
    PyObject *var_insert_mode = NULL;
    PyObject *var__esc = NULL;
    PyObject *var__next = NULL;
    PyObject *var__prev = NULL;
    PyObject *var_handle_digit = NULL;
    PyObject *var_c = NULL;
    PyObject *var__meta_dash = NULL;
    PyObject *var__dash = NULL;
    PyObject *var_is_returnable = NULL;
    struct Nuitka_CellObject *var_character_search = Nuitka_Cell_Empty();
    PyObject *var__goto_char = NULL;
    PyObject *var__goto_char_backwards = NULL;
    PyObject *var__prev_sentence = NULL;
    PyObject *var__end_of_sentence = NULL;
    PyObject *var__swap_characters = NULL;
    PyObject *var__insert_all_completions = NULL;
    PyObject *var__toggle_start_end = NULL;
    PyObject *var__start_selection = NULL;
    PyObject *var__cancel = NULL;
    PyObject *var__cancel_selection = NULL;
    PyObject *var__cut = NULL;
    PyObject *var__copy = NULL;
    PyObject *var__start_of_word = NULL;
    PyObject *var__start_next_word = NULL;
    PyObject *var__complete = NULL;
    PyObject *var__indent = NULL;
    PyObject *var__unindent = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_4087cdc8c5f9cc377ec83ea731071b54;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4087cdc8c5f9cc377ec83ea731071b54 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4087cdc8c5f9cc377ec83ea731071b54)) {
        Py_XDECREF(cache_frame_4087cdc8c5f9cc377ec83ea731071b54);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4087cdc8c5f9cc377ec83ea731071b54 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4087cdc8c5f9cc377ec83ea731071b54 = MAKE_FUNCTION_FRAME(tstate, codeobj_4087cdc8c5f9cc377ec83ea731071b54, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4087cdc8c5f9cc377ec83ea731071b54->m_type_description == NULL);
    frame_4087cdc8c5f9cc377ec83ea731071b54 = cache_frame_4087cdc8c5f9cc377ec83ea731071b54;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4087cdc8c5f9cc377ec83ea731071b54);
    assert(Py_REFCNT(frame_4087cdc8c5f9cc377ec83ea731071b54) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 42;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_key_bindings == NULL);
        var_key_bindings = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_key_bindings);
        tmp_expression_value_1 = var_key_bindings;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_handle) == NULL);
        PyCell_SET(var_handle, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assign_source_3 == NULL)) {
            tmp_assign_source_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_insert_mode == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_insert_mode = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_annotations_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_3 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 47;
        tmp_called_value_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_3, mod_consts[3]);

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_1 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__1__esc(tmp_annotations_1);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 47;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__esc == NULL);
        var__esc = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_6;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_5 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 59;
        tmp_called_value_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_5, mod_consts[8]);

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 59;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 59;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_6, mod_consts[10]);

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 59;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 59;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_9;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_8 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 60;
        tmp_called_value_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_8, mod_consts[11]);

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 60;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 60;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_9, mod_consts[12]);

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 60;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 60;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_called_value_11;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_12;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_11 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_1 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 61;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_called_value_10 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_11, mod_consts[13], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 61;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 61;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_12, mod_consts[15]);

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 61;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 61;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_15;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_14 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 62;
        tmp_called_value_13 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_14, mod_consts[16]);

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 62;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 62;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_15, mod_consts[17]);

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 62;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 62;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_18;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_17 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 63;
        tmp_called_value_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_17, mod_consts[18]);

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 63;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 63;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_18, mod_consts[19]);

        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 63;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 63;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_21;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_20 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 64;
        tmp_called_value_19 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_20, mod_consts[20]);

        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 64;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 64;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_21, mod_consts[21]);

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 64;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 64;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_called_value_23;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_24;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_23 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 65;
        tmp_called_value_22 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_23, mod_consts[22]);

        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 65;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 65;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_24, mod_consts[23]);

        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 65;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 65;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_called_value_26;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_27;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_26 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_2 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 66;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_called_value_25 = CALL_FUNCTION_WITH_POSARGS3_KWSPLIT(tstate, tmp_called_value_26, mod_consts[24], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 66;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 66;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_27, mod_consts[25]);

        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 66;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 66;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_called_value_29;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_30;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_29 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_3 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 67;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
            tmp_called_value_28 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_29, mod_consts[26], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 67;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 67;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_30, mod_consts[25]);

        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 67;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 67;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_called_value_32;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_33;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_32 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 68;
        tmp_called_value_31 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_32, mod_consts[27]);

        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 68;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 68;
        tmp_args_element_value_11 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_33, mod_consts[21]);

        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 68;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 68;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_called_value_35;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_36;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_35 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_4 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 69;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};
            tmp_called_value_34 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_35, mod_consts[28], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 69;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 69;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_36, mod_consts[29]);

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 69;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 69;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_called_value_38;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_value_39;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_38 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_5 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 70;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};
            tmp_called_value_37 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_38, mod_consts[30], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 70;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 70;
        tmp_args_element_value_13 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_39, mod_consts[15]);

        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 70;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 70;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_called_value_41;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_42;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_41 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 71;
        tmp_called_value_40 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_41, mod_consts[31]);

        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 71;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 71;
        tmp_args_element_value_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_42, mod_consts[23]);

        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 71;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 71;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_called_value_44;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_45;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_44 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_6 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 72;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_6};
            tmp_called_value_43 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_44, mod_consts[32], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 72;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 72;
        tmp_args_element_value_15 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_45, mod_consts[33]);

        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 72;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 72;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_called_value_47;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_48;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_47 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_7 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 73;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_7};
            tmp_called_value_46 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_47, mod_consts[34], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 73;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 73;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_48, mod_consts[35]);

        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 73;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 73;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_49;
        PyObject *tmp_called_value_50;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_value_51;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_50 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_8 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 74;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_8};
            tmp_called_value_49 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_50, mod_consts[36], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 74;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 74;
        tmp_args_element_value_17 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_51, mod_consts[37]);

        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 74;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 74;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_called_value_53;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_54;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_53 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_9 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 75;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_9};
            tmp_called_value_52 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_53, mod_consts[38], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 75;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 75;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_54, mod_consts[39]);

        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 75;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 75;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_55;
        PyObject *tmp_called_value_56;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_value_57;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_56 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_10 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 76;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_10};
            tmp_called_value_55 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_56, mod_consts[40], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 76;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 76;
        tmp_args_element_value_19 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_57, mod_consts[41]);

        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 76;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 76;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_55, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_called_value_59;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_value_60;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_59 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 78;
        tmp_called_value_58 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_59, mod_consts[42]);

        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 78;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 78;
        tmp_args_element_value_20 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_60, mod_consts[43]);

        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 78;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 78;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_61;
        PyObject *tmp_called_value_62;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_63;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_62 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 79;
        tmp_called_value_61 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_62, mod_consts[44]);

        if (tmp_called_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 79;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 79;
        tmp_args_element_value_21 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_63, mod_consts[45]);

        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 79;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 79;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_61, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_61);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_called_value_65;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_value_66;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_65 = Nuitka_Cell_GET(var_handle);


        tmp_kw_call_value_0_11 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__2_lambda();

        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_1_1 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 81;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_1};
            tmp_called_value_64 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_65, mod_consts[48], kw_values, mod_consts[49]);
        }

        Py_DECREF(tmp_kw_call_value_0_11);
        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 82;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 82;
        tmp_args_element_value_22 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_66, mod_consts[50]);

        if (tmp_args_element_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 82;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 81;
        tmp_call_result_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_64, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_called_value_68;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_value_69;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_68 = Nuitka_Cell_GET(var_handle);


        tmp_kw_call_value_0_12 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__3_lambda();

        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_1_2 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 85;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_2};
            tmp_called_value_67 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_68, mod_consts[51], kw_values, mod_consts[49]);
        }

        Py_DECREF(tmp_kw_call_value_0_12);
        if (tmp_called_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 86;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 86;
        tmp_args_element_value_23 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_69, mod_consts[50]);

        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 86;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 85;
        tmp_call_result_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_67, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_67);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_call_result_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_called_value_71;
        PyObject *tmp_kw_call_value_0_13;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_call_result_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_value_72;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_71 = Nuitka_Cell_GET(var_handle);
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_13 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_1);
        if (tmp_kw_call_value_0_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 89;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_13};
            tmp_called_value_70 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_71, mod_consts[53], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_13);
        if (tmp_called_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_72 == NULL)) {
            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 89;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 89;
        tmp_args_element_value_24 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_72, mod_consts[54]);

        if (tmp_args_element_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 89;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 89;
        tmp_call_result_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_70, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_call_result_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_73;
        PyObject *tmp_called_value_74;
        PyObject *tmp_kw_call_value_0_14;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_called_value_75;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_74 = Nuitka_Cell_GET(var_handle);
        tmp_operand_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_operand_value_2 == NULL)) {
            tmp_operand_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_14 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_2);
        if (tmp_kw_call_value_0_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 90;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_14};
            tmp_called_value_73 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_74, mod_consts[55], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_14);
        if (tmp_called_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);

            exception_lineno = 90;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 90;
        tmp_args_element_value_25 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_75, mod_consts[56]);

        if (tmp_args_element_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);

            exception_lineno = 90;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 90;
        tmp_call_result_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_73, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_73);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_call_result_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_called_value_77;
        PyObject *tmp_kw_call_value_0_15;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_value_78;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_77 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_15 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 92;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_15};
            tmp_called_value_76 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_77, mod_consts[57], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 92;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 92;
        tmp_args_element_value_26 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_78, mod_consts[58]);

        if (tmp_args_element_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 92;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 92;
        tmp_call_result_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_76, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_call_result_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_value_79;
        PyObject *tmp_called_value_80;
        PyObject *tmp_kw_call_value_0_16;
        PyObject *tmp_call_result_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_called_value_81;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_80 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_16 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 93;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_16};
            tmp_called_value_79 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_80, mod_consts[59], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);

            exception_lineno = 93;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 93;
        tmp_args_element_value_27 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_81, mod_consts[58]);

        if (tmp_args_element_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);

            exception_lineno = 93;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 93;
        tmp_call_result_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_79, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_79);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_call_result_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_value_82;
        PyObject *tmp_called_value_83;
        PyObject *tmp_kw_call_value_0_17;
        PyObject *tmp_call_result_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_84;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_83 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_17 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 94;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_17};
            tmp_called_value_82 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_83, mod_consts[60], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_84 == NULL)) {
            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 94;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 94;
        tmp_args_element_value_28 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_84, mod_consts[61]);

        if (tmp_args_element_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 94;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 94;
        tmp_call_result_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_82, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_call_result_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_value_85;
        PyObject *tmp_called_value_86;
        PyObject *tmp_kw_call_value_0_18;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_called_value_87;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_86 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_18 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 95;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_18};
            tmp_called_value_85 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_86, mod_consts[62], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);

            exception_lineno = 95;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 95;
        tmp_args_element_value_29 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_87, mod_consts[63]);

        if (tmp_args_element_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);

            exception_lineno = 95;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 95;
        tmp_call_result_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_85, tmp_args_element_value_29);
        Py_DECREF(tmp_called_value_85);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_call_result_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_value_88;
        PyObject *tmp_called_value_89;
        PyObject *tmp_call_result_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_value_90;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_89 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 96;
        tmp_called_value_88 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_89, mod_consts[64]);

        if (tmp_called_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_90 == NULL)) {
            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 96;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 96;
        tmp_args_element_value_30 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_90, mod_consts[65]);

        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 96;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 96;
        tmp_call_result_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_88, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_88);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_call_result_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_value_91;
        PyObject *tmp_called_value_92;
        PyObject *tmp_kw_call_value_0_19;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_call_result_30;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_called_value_93;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_92 = Nuitka_Cell_GET(var_handle);
        tmp_operand_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_operand_value_3 == NULL)) {
            tmp_operand_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_operand_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_19 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_3);
        if (tmp_kw_call_value_0_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 101;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_19};
            tmp_called_value_91 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_92, mod_consts[66], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_19);
        if (tmp_called_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_93 == NULL)) {
            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);

            exception_lineno = 101;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 101;
        tmp_args_element_value_31 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_93, mod_consts[67]);

        if (tmp_args_element_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);

            exception_lineno = 101;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 101;
        tmp_call_result_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_91, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_91);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_call_result_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_value_94;
        PyObject *tmp_called_value_95;
        PyObject *tmp_call_result_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_called_value_96;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_95 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 103;
        tmp_called_value_94 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_95, mod_consts[68]);

        if (tmp_called_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_96 == NULL)) {
            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 103;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 103;
        tmp_args_element_value_32 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_96, mod_consts[69]);

        if (tmp_args_element_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 103;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 103;
        tmp_call_result_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_94, tmp_args_element_value_32);
        Py_DECREF(tmp_called_value_94);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_call_result_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_value_97;
        PyObject *tmp_called_value_98;
        PyObject *tmp_call_result_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_value_99;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_98 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 104;
        tmp_called_value_97 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_98, mod_consts[70]);

        if (tmp_called_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_99 == NULL)) {
            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);

            exception_lineno = 104;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 104;
        tmp_args_element_value_33 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_99, mod_consts[71]);

        if (tmp_args_element_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);

            exception_lineno = 104;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 104;
        tmp_call_result_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_97, tmp_args_element_value_33);
        Py_DECREF(tmp_called_value_97);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_call_result_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_value_100;
        PyObject *tmp_called_value_101;
        PyObject *tmp_call_result_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_called_value_102;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_101 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 105;
        tmp_called_value_100 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_101, mod_consts[72]);

        if (tmp_called_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_102 == NULL)) {
            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 105;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 105;
        tmp_args_element_value_34 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_102, mod_consts[73]);

        if (tmp_args_element_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 105;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 105;
        tmp_call_result_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_100, tmp_args_element_value_34);
        Py_DECREF(tmp_called_value_100);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_call_result_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_103;
        PyObject *tmp_called_value_104;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_annotations_2;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_104 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 107;
        tmp_called_value_103 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_104, mod_consts[74]);

        if (tmp_called_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_35 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__4__next(tmp_annotations_2);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 107;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_103, tmp_args_element_value_35);
        Py_DECREF(tmp_called_value_103);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__next == NULL);
        var__next = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_105;
        PyObject *tmp_called_value_106;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_annotations_3;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_106 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 112;
        tmp_called_value_105 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_106, mod_consts[78]);

        if (tmp_called_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_36 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__5__prev(tmp_annotations_3);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 112;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_105, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_105);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__prev == NULL);
        var__prev = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_annotations_4;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_annotations_4 = DICT_COPY(mod_consts[82]);

        tmp_closure_1[0] = var_handle;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_7 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__6_handle_digit(tmp_annotations_4, tmp_closure_1);

        assert(var_handle_digit == NULL);
        var_handle_digit = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[86];
        tmp_assign_source_8 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_8 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ocooooooooocooooooooooooooooo";
                exception_lineno = 128;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_10;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_107;
        PyObject *tmp_call_result_34;
        PyObject *tmp_args_element_value_37;
        if (var_handle_digit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 129;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_value_107 = var_handle_digit;
        CHECK_OBJECT(var_c);
        tmp_args_element_value_37 = var_c;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 129;
        tmp_call_result_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_107, tmp_args_element_value_37);
        if (tmp_call_result_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_34);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 128;
        type_description_1 = "ocooooooooocooooooooooooooooo";
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
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_108;
        PyObject *tmp_called_value_109;
        PyObject *tmp_kw_call_value_0_20;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_annotations_5;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_109 = Nuitka_Cell_GET(var_handle);
        tmp_operand_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_operand_value_4 == NULL)) {
            tmp_operand_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_operand_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_20 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_4);
        if (tmp_kw_call_value_0_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 131;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_20};
            tmp_called_value_108 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_109, mod_consts[88], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_20);
        if (tmp_called_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_38 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__7__meta_dash(tmp_annotations_5);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 131;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_108, tmp_args_element_value_38);
        Py_DECREF(tmp_called_value_108);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__meta_dash == NULL);
        var__meta_dash = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_110;
        PyObject *tmp_called_value_111;
        PyObject *tmp_kw_call_value_0_21;
        PyObject *tmp_called_value_112;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_annotations_6;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_111 = Nuitka_Cell_GET(var_handle);
        tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_112 == NULL)) {
            tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        if (tmp_called_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }


        tmp_args_element_value_39 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__8_lambda();

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 137;
        tmp_kw_call_value_0_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_112, tmp_args_element_value_39);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_kw_call_value_0_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 137;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_21};
            tmp_called_value_110 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_111, mod_consts[93], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_21);
        if (tmp_called_value_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_40 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__9__dash(tmp_annotations_6);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 137;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_110, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_110);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__dash == NULL);
        var__dash = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_113;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_annotations_7;
        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_113 == NULL)) {
            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        if (tmp_called_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = DICT_COPY(mod_consts[97]);


        tmp_args_element_value_41 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__10_is_returnable(tmp_annotations_7);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 145;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_113, tmp_args_element_value_41);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_is_returnable == NULL);
        var_is_returnable = tmp_assign_source_13;
    }
    {
        PyObject *tmp_called_value_114;
        PyObject *tmp_called_value_115;
        PyObject *tmp_kw_call_value_0_22;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_call_result_35;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_called_value_116;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_115 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_bitand_expr_left_1 = var_insert_mode;
        CHECK_OBJECT(var_is_returnable);
        tmp_bitand_expr_right_1 = var_is_returnable;
        tmp_kw_call_value_0_22 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_kw_call_value_0_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 150;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_22};
            tmp_called_value_114 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_115, mod_consts[100], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_22);
        if (tmp_called_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_116 == NULL)) {
            tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_114);

            exception_lineno = 151;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 151;
        tmp_args_element_value_42 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_116, mod_consts[101]);

        if (tmp_args_element_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_114);

            exception_lineno = 151;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 150;
        tmp_call_result_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_114, tmp_args_element_value_42);
        Py_DECREF(tmp_called_value_114);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_call_result_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_value_117;
        PyObject *tmp_called_value_118;
        PyObject *tmp_kw_call_value_0_23;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        PyObject *tmp_bitand_expr_left_3;
        PyObject *tmp_bitand_expr_right_3;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_call_result_36;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_called_value_119;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_118 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_bitand_expr_left_3 = var_insert_mode;
        CHECK_OBJECT(var_is_returnable);
        tmp_bitand_expr_right_3 = var_is_returnable;
        tmp_bitand_expr_left_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
        if (tmp_bitand_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_operand_value_5 == NULL)) {
            tmp_operand_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_operand_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitand_expr_left_2);

            exception_lineno = 155;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_2 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_5);
        if (tmp_bitand_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitand_expr_left_2);

            exception_lineno = 155;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_23 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        Py_DECREF(tmp_bitand_expr_left_2);
        Py_DECREF(tmp_bitand_expr_right_2);
        if (tmp_kw_call_value_0_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 155;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_23};
            tmp_called_value_117 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_118, mod_consts[103], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_23);
        if (tmp_called_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_119 == NULL)) {
            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_117);

            exception_lineno = 156;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 156;
        tmp_args_element_value_43 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_119, mod_consts[101]);

        if (tmp_args_element_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_117);

            exception_lineno = 156;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 155;
        tmp_call_result_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_117, tmp_args_element_value_43);
        Py_DECREF(tmp_called_value_117);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_call_result_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_annotations_8;
        tmp_annotations_8 = DICT_COPY(mod_consts[104]);


        tmp_assign_source_14 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__11_character_search(tmp_annotations_8);

        assert(Nuitka_Cell_GET(var_character_search) == NULL);
        PyCell_SET(var_character_search, tmp_assign_source_14);

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_120;
        PyObject *tmp_called_value_121;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_annotations_9;
        struct Nuitka_CellObject *tmp_closure_2[1];
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_121 = Nuitka_Cell_GET(var_handle);
        tmp_args_element_value_44 = mod_consts[107];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[109]);
        if (tmp_args_element_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45};
            tmp_called_value_120 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_121, call_args);
        }

        Py_DECREF(tmp_args_element_value_45);
        if (tmp_called_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = DICT_COPY(mod_consts[4]);

        tmp_closure_2[0] = var_character_search;
        Py_INCREF(tmp_closure_2[0]);

        tmp_args_element_value_46 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__12__goto_char(tmp_annotations_9, tmp_closure_2);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 170;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_120, tmp_args_element_value_46);
        Py_DECREF(tmp_called_value_120);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__goto_char == NULL);
        var__goto_char = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_122;
        PyObject *tmp_called_value_123;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_annotations_10;
        struct Nuitka_CellObject *tmp_closure_3[1];
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_123 = Nuitka_Cell_GET(var_handle);
        tmp_args_element_value_47 = mod_consts[113];
        tmp_args_element_value_48 = mod_consts[107];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[109]);
        if (tmp_args_element_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_49};
            tmp_called_value_122 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_123, call_args);
        }

        Py_DECREF(tmp_args_element_value_49);
        if (tmp_called_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = DICT_COPY(mod_consts[4]);

        tmp_closure_3[0] = var_character_search;
        Py_INCREF(tmp_closure_3[0]);

        tmp_args_element_value_50 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__13__goto_char_backwards(tmp_annotations_10, tmp_closure_3);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 176;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_122, tmp_args_element_value_50);
        Py_DECREF(tmp_called_value_122);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__goto_char_backwards == NULL);
        var__goto_char_backwards = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_124;
        PyObject *tmp_called_value_125;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_annotations_11;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_125 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 182;
        tmp_called_value_124 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_125, mod_consts[117]);

        if (tmp_called_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_11 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_51 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__14__prev_sentence(tmp_annotations_11);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 182;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_124, tmp_args_element_value_51);
        Py_DECREF(tmp_called_value_124);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__prev_sentence == NULL);
        var__prev_sentence = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_126;
        PyObject *tmp_called_value_127;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_annotations_12;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_127 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 187;
        tmp_called_value_126 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_127, mod_consts[121]);

        if (tmp_called_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_12 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_52 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__15__end_of_sentence(tmp_annotations_12);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 187;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_126, tmp_args_element_value_52);
        Py_DECREF(tmp_called_value_126);
        Py_DECREF(tmp_args_element_value_52);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__end_of_sentence == NULL);
        var__end_of_sentence = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_128;
        PyObject *tmp_called_value_129;
        PyObject *tmp_kw_call_value_0_24;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_annotations_13;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_129 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_24 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 192;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_24};
            tmp_called_value_128 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_129, mod_consts[125], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_13 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_53 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__16__swap_characters(tmp_annotations_13);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 192;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_128, tmp_args_element_value_53);
        Py_DECREF(tmp_called_value_128);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__swap_characters == NULL);
        var__swap_characters = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_130;
        PyObject *tmp_called_value_131;
        PyObject *tmp_kw_call_value_0_25;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_annotations_14;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_131 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_25 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 199;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_25};
            tmp_called_value_130 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_131, mod_consts[129], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_14 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_54 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__17__insert_all_completions(tmp_annotations_14);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 199;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_130, tmp_args_element_value_54);
        Py_DECREF(tmp_called_value_130);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__insert_all_completions == NULL);
        var__insert_all_completions = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_132;
        PyObject *tmp_called_value_133;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_annotations_15;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_133 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 216;
        tmp_called_value_132 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_133, mod_consts[133]);

        if (tmp_called_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_15 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_55 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__18__toggle_start_end(tmp_annotations_15);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 216;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_132, tmp_args_element_value_55);
        Py_DECREF(tmp_called_value_132);
        Py_DECREF(tmp_args_element_value_55);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__toggle_start_end == NULL);
        var__toggle_start_end = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_134;
        PyObject *tmp_called_value_135;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_annotations_16;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_135 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 231;
        tmp_called_value_134 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_135, mod_consts[137]);

        if (tmp_called_value_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_16 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_56 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__19__start_selection(tmp_annotations_16);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 231;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_134, tmp_args_element_value_56);
        Py_DECREF(tmp_called_value_134);
        Py_DECREF(tmp_args_element_value_56);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__start_selection == NULL);
        var__start_selection = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_136;
        PyObject *tmp_called_value_137;
        PyObject *tmp_kw_call_value_0_26;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_annotations_17;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_137 = Nuitka_Cell_GET(var_handle);
        tmp_operand_value_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_operand_value_6 == NULL)) {
            tmp_operand_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_operand_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_26 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_6);
        if (tmp_kw_call_value_0_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 241;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_26};
            tmp_called_value_136 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_137, mod_consts[141], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_26);
        if (tmp_called_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_17 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_57 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__20__cancel(tmp_annotations_17);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 241;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_136, tmp_args_element_value_57);
        Py_DECREF(tmp_called_value_136);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__cancel == NULL);
        var__cancel = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_138;
        PyObject *tmp_called_value_139;
        PyObject *tmp_kw_call_value_0_27;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_annotations_18;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_139 = Nuitka_Cell_GET(var_handle);
        tmp_kw_call_value_0_27 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_kw_call_value_0_27 == NULL)) {
            tmp_kw_call_value_0_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_kw_call_value_0_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 249;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_27};
            tmp_called_value_138 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_139, mod_consts[141], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_18 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_58 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__21__cancel_selection(tmp_annotations_18);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 249;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_138, tmp_args_element_value_58);
        Py_DECREF(tmp_called_value_138);
        Py_DECREF(tmp_args_element_value_58);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__cancel_selection == NULL);
        var__cancel_selection = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_140;
        PyObject *tmp_called_value_141;
        PyObject *tmp_kw_call_value_0_28;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_called_value_142;
        PyObject *tmp_called_value_143;
        PyObject *tmp_kw_call_value_0_29;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_annotations_19;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_141 = Nuitka_Cell_GET(var_handle);
        tmp_kw_call_value_0_28 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_kw_call_value_0_28 == NULL)) {
            tmp_kw_call_value_0_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_kw_call_value_0_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 256;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_28};
            tmp_called_value_140 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_141, mod_consts[148], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_143 = Nuitka_Cell_GET(var_handle);
        tmp_kw_call_value_0_29 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_kw_call_value_0_29 == NULL)) {
            tmp_kw_call_value_0_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_kw_call_value_0_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_140);

            exception_lineno = 257;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 257;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_29};
            tmp_called_value_142 = CALL_FUNCTION_WITH_POSARGS3_KWSPLIT(tstate, tmp_called_value_143, mod_consts[149], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_140);

            exception_lineno = 257;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_19 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_60 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__22__cut(tmp_annotations_19);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 257;
        tmp_args_element_value_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_142, tmp_args_element_value_60);
        Py_DECREF(tmp_called_value_142);
        Py_DECREF(tmp_args_element_value_60);
        if (tmp_args_element_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_140);

            exception_lineno = 257;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 256;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_140, tmp_args_element_value_59);
        Py_DECREF(tmp_called_value_140);
        Py_DECREF(tmp_args_element_value_59);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__cut == NULL);
        var__cut = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_144;
        PyObject *tmp_called_value_145;
        PyObject *tmp_kw_call_value_0_30;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_annotations_20;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_145 = Nuitka_Cell_GET(var_handle);
        tmp_kw_call_value_0_30 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_kw_call_value_0_30 == NULL)) {
            tmp_kw_call_value_0_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_kw_call_value_0_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 265;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_30};
            tmp_called_value_144 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_145, mod_consts[153], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_20 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_61 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__23__copy(tmp_annotations_20);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 265;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_144, tmp_args_element_value_61);
        Py_DECREF(tmp_called_value_144);
        Py_DECREF(tmp_args_element_value_61);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__copy == NULL);
        var__copy = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_146;
        PyObject *tmp_called_value_147;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_annotations_21;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_147 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 273;
        tmp_called_value_146 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_147, mod_consts[157]);

        if (tmp_called_value_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_21 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_62 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__24__start_of_word(tmp_annotations_21);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 273;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_146, tmp_args_element_value_62);
        Py_DECREF(tmp_called_value_146);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__start_of_word == NULL);
        var__start_of_word = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_148;
        PyObject *tmp_called_value_149;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_annotations_22;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_149 = Nuitka_Cell_GET(var_handle);
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 283;
        tmp_called_value_148 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_149, mod_consts[161]);

        if (tmp_called_value_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_22 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_63 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__25__start_next_word(tmp_annotations_22);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 283;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_148, tmp_args_element_value_63);
        Py_DECREF(tmp_called_value_148);
        Py_DECREF(tmp_args_element_value_63);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__start_next_word == NULL);
        var__start_next_word = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_150;
        PyObject *tmp_called_value_151;
        PyObject *tmp_kw_call_value_0_31;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_annotations_23;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_151 = Nuitka_Cell_GET(var_handle);
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_31 = var_insert_mode;
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 294;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_31};
            tmp_called_value_150 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_151, mod_consts[165], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_23 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_64 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__26__complete(tmp_annotations_23);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 294;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_150, tmp_args_element_value_64);
        Py_DECREF(tmp_called_value_150);
        Py_DECREF(tmp_args_element_value_64);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__complete == NULL);
        var__complete = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_152;
        PyObject *tmp_called_value_153;
        PyObject *tmp_kw_call_value_0_32;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_annotations_24;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_153 = Nuitka_Cell_GET(var_handle);
        tmp_kw_call_value_0_32 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_kw_call_value_0_32 == NULL)) {
            tmp_kw_call_value_0_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_kw_call_value_0_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 305;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_32};
            tmp_called_value_152 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_153, mod_consts[169], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_24 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_65 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__27__indent(tmp_annotations_24);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 305;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_152, tmp_args_element_value_65);
        Py_DECREF(tmp_called_value_152);
        Py_DECREF(tmp_args_element_value_65);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__indent == NULL);
        var__indent = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_154;
        PyObject *tmp_called_value_155;
        PyObject *tmp_kw_call_value_0_33;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_annotations_25;
        CHECK_OBJECT(Nuitka_Cell_GET(var_handle));
        tmp_called_value_155 = Nuitka_Cell_GET(var_handle);
        tmp_kw_call_value_0_33 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_kw_call_value_0_33 == NULL)) {
            tmp_kw_call_value_0_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_kw_call_value_0_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 322;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_33};
            tmp_called_value_154 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_155, mod_consts[173], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_25 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_66 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__28__unindent(tmp_annotations_25);

        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 322;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_154, tmp_args_element_value_66);
        Py_DECREF(tmp_called_value_154);
        Py_DECREF(tmp_args_element_value_66);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__unindent == NULL);
        var__unindent = tmp_assign_source_31;
    }
    {
        PyObject *tmp_called_value_156;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_args_element_value_68;
        tmp_called_value_156 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[177]);

        if (unlikely(tmp_called_value_156 == NULL)) {
            tmp_called_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[177]);
        }

        if (tmp_called_value_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_key_bindings);
        tmp_args_element_value_67 = var_key_bindings;
        tmp_args_element_value_68 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_args_element_value_68 == NULL)) {
            tmp_args_element_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[178]);
        }

        if (tmp_args_element_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ocooooooooocooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame.f_lineno = 335;
        {
            PyObject *call_args[] = {tmp_args_element_value_67, tmp_args_element_value_68};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_156, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ocooooooooocooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_4087cdc8c5f9cc377ec83ea731071b54, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4087cdc8c5f9cc377ec83ea731071b54->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4087cdc8c5f9cc377ec83ea731071b54, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4087cdc8c5f9cc377ec83ea731071b54,
        type_description_1,
        var_key_bindings,
        var_handle,
        var_insert_mode,
        var__esc,
        var__next,
        var__prev,
        var_handle_digit,
        var_c,
        var__meta_dash,
        var__dash,
        var_is_returnable,
        var_character_search,
        var__goto_char,
        var__goto_char_backwards,
        var__prev_sentence,
        var__end_of_sentence,
        var__swap_characters,
        var__insert_all_completions,
        var__toggle_start_end,
        var__start_selection,
        var__cancel,
        var__cancel_selection,
        var__cut,
        var__copy,
        var__start_of_word,
        var__start_next_word,
        var__complete,
        var__indent,
        var__unindent
    );


    // Release cached frame if used for exception.
    if (frame_4087cdc8c5f9cc377ec83ea731071b54 == cache_frame_4087cdc8c5f9cc377ec83ea731071b54) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4087cdc8c5f9cc377ec83ea731071b54);
        cache_frame_4087cdc8c5f9cc377ec83ea731071b54 = NULL;
    }

    assertFrameObject(frame_4087cdc8c5f9cc377ec83ea731071b54);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_key_bindings);
    Py_DECREF(var_key_bindings);
    var_key_bindings = NULL;
    CHECK_OBJECT(var_handle);
    Py_DECREF(var_handle);
    var_handle = NULL;
    CHECK_OBJECT(var_insert_mode);
    Py_DECREF(var_insert_mode);
    var_insert_mode = NULL;
    CHECK_OBJECT(var__esc);
    Py_DECREF(var__esc);
    var__esc = NULL;
    CHECK_OBJECT(var__next);
    Py_DECREF(var__next);
    var__next = NULL;
    CHECK_OBJECT(var__prev);
    Py_DECREF(var__prev);
    var__prev = NULL;
    Py_XDECREF(var_handle_digit);
    var_handle_digit = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    CHECK_OBJECT(var__meta_dash);
    Py_DECREF(var__meta_dash);
    var__meta_dash = NULL;
    CHECK_OBJECT(var__dash);
    Py_DECREF(var__dash);
    var__dash = NULL;
    CHECK_OBJECT(var_is_returnable);
    Py_DECREF(var_is_returnable);
    var_is_returnable = NULL;
    CHECK_OBJECT(var_character_search);
    Py_DECREF(var_character_search);
    var_character_search = NULL;
    CHECK_OBJECT(var__goto_char);
    Py_DECREF(var__goto_char);
    var__goto_char = NULL;
    CHECK_OBJECT(var__goto_char_backwards);
    Py_DECREF(var__goto_char_backwards);
    var__goto_char_backwards = NULL;
    CHECK_OBJECT(var__prev_sentence);
    Py_DECREF(var__prev_sentence);
    var__prev_sentence = NULL;
    CHECK_OBJECT(var__end_of_sentence);
    Py_DECREF(var__end_of_sentence);
    var__end_of_sentence = NULL;
    CHECK_OBJECT(var__swap_characters);
    Py_DECREF(var__swap_characters);
    var__swap_characters = NULL;
    CHECK_OBJECT(var__insert_all_completions);
    Py_DECREF(var__insert_all_completions);
    var__insert_all_completions = NULL;
    CHECK_OBJECT(var__toggle_start_end);
    Py_DECREF(var__toggle_start_end);
    var__toggle_start_end = NULL;
    CHECK_OBJECT(var__start_selection);
    Py_DECREF(var__start_selection);
    var__start_selection = NULL;
    CHECK_OBJECT(var__cancel);
    Py_DECREF(var__cancel);
    var__cancel = NULL;
    CHECK_OBJECT(var__cancel_selection);
    Py_DECREF(var__cancel_selection);
    var__cancel_selection = NULL;
    CHECK_OBJECT(var__cut);
    Py_DECREF(var__cut);
    var__cut = NULL;
    CHECK_OBJECT(var__copy);
    Py_DECREF(var__copy);
    var__copy = NULL;
    CHECK_OBJECT(var__start_of_word);
    Py_DECREF(var__start_of_word);
    var__start_of_word = NULL;
    CHECK_OBJECT(var__start_next_word);
    Py_DECREF(var__start_next_word);
    var__start_next_word = NULL;
    CHECK_OBJECT(var__complete);
    Py_DECREF(var__complete);
    var__complete = NULL;
    CHECK_OBJECT(var__indent);
    Py_DECREF(var__indent);
    var__indent = NULL;
    CHECK_OBJECT(var__unindent);
    Py_DECREF(var__unindent);
    var__unindent = NULL;
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

    Py_XDECREF(var_key_bindings);
    var_key_bindings = NULL;
    CHECK_OBJECT(var_handle);
    Py_DECREF(var_handle);
    var_handle = NULL;
    Py_XDECREF(var_insert_mode);
    var_insert_mode = NULL;
    Py_XDECREF(var__esc);
    var__esc = NULL;
    Py_XDECREF(var__next);
    var__next = NULL;
    Py_XDECREF(var__prev);
    var__prev = NULL;
    Py_XDECREF(var_handle_digit);
    var_handle_digit = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var__meta_dash);
    var__meta_dash = NULL;
    Py_XDECREF(var__dash);
    var__dash = NULL;
    Py_XDECREF(var_is_returnable);
    var_is_returnable = NULL;
    CHECK_OBJECT(var_character_search);
    Py_DECREF(var_character_search);
    var_character_search = NULL;
    Py_XDECREF(var__goto_char);
    var__goto_char = NULL;
    Py_XDECREF(var__goto_char_backwards);
    var__goto_char_backwards = NULL;
    Py_XDECREF(var__prev_sentence);
    var__prev_sentence = NULL;
    Py_XDECREF(var__end_of_sentence);
    var__end_of_sentence = NULL;
    Py_XDECREF(var__swap_characters);
    var__swap_characters = NULL;
    Py_XDECREF(var__insert_all_completions);
    var__insert_all_completions = NULL;
    Py_XDECREF(var__toggle_start_end);
    var__toggle_start_end = NULL;
    Py_XDECREF(var__start_selection);
    var__start_selection = NULL;
    Py_XDECREF(var__cancel);
    var__cancel = NULL;
    Py_XDECREF(var__cancel_selection);
    var__cancel_selection = NULL;
    Py_XDECREF(var__cut);
    var__cut = NULL;
    Py_XDECREF(var__copy);
    var__copy = NULL;
    Py_XDECREF(var__start_of_word);
    var__start_of_word = NULL;
    Py_XDECREF(var__start_next_word);
    var__start_next_word = NULL;
    Py_XDECREF(var__complete);
    var__complete = NULL;
    Py_XDECREF(var__indent);
    var__indent = NULL;
    Py_XDECREF(var__unindent);
    var__unindent = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__4__next(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_2cc95d8de8225c6438893680b09b059f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2cc95d8de8225c6438893680b09b059f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2cc95d8de8225c6438893680b09b059f)) {
        Py_XDECREF(cache_frame_2cc95d8de8225c6438893680b09b059f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2cc95d8de8225c6438893680b09b059f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2cc95d8de8225c6438893680b09b059f = MAKE_FUNCTION_FRAME(tstate, codeobj_2cc95d8de8225c6438893680b09b059f, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2cc95d8de8225c6438893680b09b059f->m_type_description == NULL);
    frame_2cc95d8de8225c6438893680b09b059f = cache_frame_2cc95d8de8225c6438893680b09b059f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2cc95d8de8225c6438893680b09b059f);
    assert(Py_REFCNT(frame_2cc95d8de8225c6438893680b09b059f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2cc95d8de8225c6438893680b09b059f->m_frame.f_lineno = 110;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[181]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
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
        exception_tb = MAKE_TRACEBACK(frame_2cc95d8de8225c6438893680b09b059f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2cc95d8de8225c6438893680b09b059f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2cc95d8de8225c6438893680b09b059f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2cc95d8de8225c6438893680b09b059f,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_2cc95d8de8225c6438893680b09b059f == cache_frame_2cc95d8de8225c6438893680b09b059f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2cc95d8de8225c6438893680b09b059f);
        cache_frame_2cc95d8de8225c6438893680b09b059f = NULL;
    }

    assertFrameObject(frame_2cc95d8de8225c6438893680b09b059f);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__5__prev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_85d5e512c3f744df725ee7a5838c8168;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_85d5e512c3f744df725ee7a5838c8168 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_85d5e512c3f744df725ee7a5838c8168)) {
        Py_XDECREF(cache_frame_85d5e512c3f744df725ee7a5838c8168);

#if _DEBUG_REFCOUNTS
        if (cache_frame_85d5e512c3f744df725ee7a5838c8168 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_85d5e512c3f744df725ee7a5838c8168 = MAKE_FUNCTION_FRAME(tstate, codeobj_85d5e512c3f744df725ee7a5838c8168, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_85d5e512c3f744df725ee7a5838c8168->m_type_description == NULL);
    frame_85d5e512c3f744df725ee7a5838c8168 = cache_frame_85d5e512c3f744df725ee7a5838c8168;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_85d5e512c3f744df725ee7a5838c8168);
    assert(Py_REFCNT(frame_85d5e512c3f744df725ee7a5838c8168) == 2);

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
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[180]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[182]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_3 = par_event;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[183]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 115;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_85d5e512c3f744df725ee7a5838c8168->m_frame.f_lineno = 115;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[184]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
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
        exception_tb = MAKE_TRACEBACK(frame_85d5e512c3f744df725ee7a5838c8168, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_85d5e512c3f744df725ee7a5838c8168->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_85d5e512c3f744df725ee7a5838c8168, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_85d5e512c3f744df725ee7a5838c8168,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_85d5e512c3f744df725ee7a5838c8168 == cache_frame_85d5e512c3f744df725ee7a5838c8168) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_85d5e512c3f744df725ee7a5838c8168);
        cache_frame_85d5e512c3f744df725ee7a5838c8168 = NULL;
    }

    assertFrameObject(frame_85d5e512c3f744df725ee7a5838c8168);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__6_handle_digit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_c = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var__ = NULL;
    struct Nuitka_FrameObject *frame_4c78c11c801cb397ffb7238731b2c300;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4c78c11c801cb397ffb7238731b2c300 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4c78c11c801cb397ffb7238731b2c300)) {
        Py_XDECREF(cache_frame_4c78c11c801cb397ffb7238731b2c300);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4c78c11c801cb397ffb7238731b2c300 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4c78c11c801cb397ffb7238731b2c300 = MAKE_FUNCTION_FRAME(tstate, codeobj_4c78c11c801cb397ffb7238731b2c300, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4c78c11c801cb397ffb7238731b2c300->m_type_description == NULL);
    frame_4c78c11c801cb397ffb7238731b2c300 = cache_frame_4c78c11c801cb397ffb7238731b2c300;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4c78c11c801cb397ffb7238731b2c300);
    assert(Py_REFCNT(frame_4c78c11c801cb397ffb7238731b2c300) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[185]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 123;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(Nuitka_Cell_GET(par_c));
        tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(par_c);
        tmp_kw_call_dict_value_0_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
            tmp_kw_call_dict_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }
        frame_4c78c11c801cb397ffb7238731b2c300->m_frame.f_lineno = 123;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_called_value_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[14]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[185]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 124;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_value_2 = mod_consts[113];
        CHECK_OBJECT(Nuitka_Cell_GET(par_c));
        tmp_args_element_value_3 = Nuitka_Cell_GET(par_c);
        frame_4c78c11c801cb397ffb7238731b2c300->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_called_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 124;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = DICT_COPY(mod_consts[4]);

        tmp_closure_1[0] = par_c;
        Py_INCREF(tmp_closure_1[0]);

        tmp_args_element_value_4 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__6_handle_digit$$$function__1__(tmp_annotations_1, tmp_closure_1);

        frame_4c78c11c801cb397ffb7238731b2c300->m_frame.f_lineno = 124;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 124;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }
        frame_4c78c11c801cb397ffb7238731b2c300->m_frame.f_lineno = 123;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }
        assert(var__ == NULL);
        var__ = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4c78c11c801cb397ffb7238731b2c300, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c78c11c801cb397ffb7238731b2c300->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c78c11c801cb397ffb7238731b2c300, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4c78c11c801cb397ffb7238731b2c300,
        type_description_1,
        par_c,
        var__,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_4c78c11c801cb397ffb7238731b2c300 == cache_frame_4c78c11c801cb397ffb7238731b2c300) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4c78c11c801cb397ffb7238731b2c300);
        cache_frame_4c78c11c801cb397ffb7238731b2c300 = NULL;
    }

    assertFrameObject(frame_4c78c11c801cb397ffb7238731b2c300);

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
    CHECK_OBJECT(var__);
    Py_DECREF(var__);
    var__ = NULL;
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
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__6_handle_digit$$$function__1__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_3086ccc58ee582fff6dd82e0e0b29c23;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3086ccc58ee582fff6dd82e0e0b29c23 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3086ccc58ee582fff6dd82e0e0b29c23)) {
        Py_XDECREF(cache_frame_3086ccc58ee582fff6dd82e0e0b29c23);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3086ccc58ee582fff6dd82e0e0b29c23 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3086ccc58ee582fff6dd82e0e0b29c23 = MAKE_FUNCTION_FRAME(tstate, codeobj_3086ccc58ee582fff6dd82e0e0b29c23, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3086ccc58ee582fff6dd82e0e0b29c23->m_type_description == NULL);
    frame_3086ccc58ee582fff6dd82e0e0b29c23 = cache_frame_3086ccc58ee582fff6dd82e0e0b29c23;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3086ccc58ee582fff6dd82e0e0b29c23);
    assert(Py_REFCNT(frame_3086ccc58ee582fff6dd82e0e0b29c23) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[188]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[189]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 126;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_3086ccc58ee582fff6dd82e0e0b29c23->m_frame.f_lineno = 126;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
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
        exception_tb = MAKE_TRACEBACK(frame_3086ccc58ee582fff6dd82e0e0b29c23, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3086ccc58ee582fff6dd82e0e0b29c23->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3086ccc58ee582fff6dd82e0e0b29c23, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3086ccc58ee582fff6dd82e0e0b29c23,
        type_description_1,
        par_event,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_3086ccc58ee582fff6dd82e0e0b29c23 == cache_frame_3086ccc58ee582fff6dd82e0e0b29c23) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3086ccc58ee582fff6dd82e0e0b29c23);
        cache_frame_3086ccc58ee582fff6dd82e0e0b29c23 = NULL;
    }

    assertFrameObject(frame_3086ccc58ee582fff6dd82e0e0b29c23);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__7__meta_dash(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_4baebec551a02447d4e00e5ac986a857;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4baebec551a02447d4e00e5ac986a857 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4baebec551a02447d4e00e5ac986a857)) {
        Py_XDECREF(cache_frame_4baebec551a02447d4e00e5ac986a857);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4baebec551a02447d4e00e5ac986a857 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4baebec551a02447d4e00e5ac986a857 = MAKE_FUNCTION_FRAME(tstate, codeobj_4baebec551a02447d4e00e5ac986a857, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4baebec551a02447d4e00e5ac986a857->m_type_description == NULL);
    frame_4baebec551a02447d4e00e5ac986a857 = cache_frame_4baebec551a02447d4e00e5ac986a857;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4baebec551a02447d4e00e5ac986a857);
    assert(Py_REFCNT(frame_4baebec551a02447d4e00e5ac986a857) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[190]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_event);
        tmp_called_instance_1 = par_event;
        frame_4baebec551a02447d4e00e5ac986a857->m_frame.f_lineno = 135;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[188],
            PyTuple_GET_ITEM(mod_consts[93], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4baebec551a02447d4e00e5ac986a857, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4baebec551a02447d4e00e5ac986a857->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4baebec551a02447d4e00e5ac986a857, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4baebec551a02447d4e00e5ac986a857,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_4baebec551a02447d4e00e5ac986a857 == cache_frame_4baebec551a02447d4e00e5ac986a857) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4baebec551a02447d4e00e5ac986a857);
        cache_frame_4baebec551a02447d4e00e5ac986a857 = NULL;
    }

    assertFrameObject(frame_4baebec551a02447d4e00e5ac986a857);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__8_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_a42904e0e3249d35e8f12a1cc4a835c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a42904e0e3249d35e8f12a1cc4a835c0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a42904e0e3249d35e8f12a1cc4a835c0)) {
        Py_XDECREF(cache_frame_a42904e0e3249d35e8f12a1cc4a835c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a42904e0e3249d35e8f12a1cc4a835c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a42904e0e3249d35e8f12a1cc4a835c0 = MAKE_FUNCTION_FRAME(tstate, codeobj_a42904e0e3249d35e8f12a1cc4a835c0, module_prompt_toolkit$key_binding$bindings$emacs, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a42904e0e3249d35e8f12a1cc4a835c0->m_type_description == NULL);
    frame_a42904e0e3249d35e8f12a1cc4a835c0 = cache_frame_a42904e0e3249d35e8f12a1cc4a835c0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a42904e0e3249d35e8f12a1cc4a835c0);
    assert(Py_REFCNT(frame_a42904e0e3249d35e8f12a1cc4a835c0) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[191]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        frame_a42904e0e3249d35e8f12a1cc4a835c0->m_frame.f_lineno = 137;
        tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[192]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[183]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[193];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

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
        exception_tb = MAKE_TRACEBACK(frame_a42904e0e3249d35e8f12a1cc4a835c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a42904e0e3249d35e8f12a1cc4a835c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a42904e0e3249d35e8f12a1cc4a835c0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a42904e0e3249d35e8f12a1cc4a835c0,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_a42904e0e3249d35e8f12a1cc4a835c0 == cache_frame_a42904e0e3249d35e8f12a1cc4a835c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a42904e0e3249d35e8f12a1cc4a835c0);
        cache_frame_a42904e0e3249d35e8f12a1cc4a835c0 = NULL;
    }

    assertFrameObject(frame_a42904e0e3249d35e8f12a1cc4a835c0);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__9__dash(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_b7dc4e9e9e4aa32a2c2aea84c8996524;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b7dc4e9e9e4aa32a2c2aea84c8996524 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b7dc4e9e9e4aa32a2c2aea84c8996524)) {
        Py_XDECREF(cache_frame_b7dc4e9e9e4aa32a2c2aea84c8996524);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b7dc4e9e9e4aa32a2c2aea84c8996524 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b7dc4e9e9e4aa32a2c2aea84c8996524 = MAKE_FUNCTION_FRAME(tstate, codeobj_b7dc4e9e9e4aa32a2c2aea84c8996524, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b7dc4e9e9e4aa32a2c2aea84c8996524->m_type_description == NULL);
    frame_b7dc4e9e9e4aa32a2c2aea84c8996524 = cache_frame_b7dc4e9e9e4aa32a2c2aea84c8996524;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b7dc4e9e9e4aa32a2c2aea84c8996524);
    assert(Py_REFCNT(frame_b7dc4e9e9e4aa32a2c2aea84c8996524) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_assattr_value_1 = mod_consts[193];
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[194]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[192]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[183], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b7dc4e9e9e4aa32a2c2aea84c8996524, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b7dc4e9e9e4aa32a2c2aea84c8996524->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b7dc4e9e9e4aa32a2c2aea84c8996524, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b7dc4e9e9e4aa32a2c2aea84c8996524,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_b7dc4e9e9e4aa32a2c2aea84c8996524 == cache_frame_b7dc4e9e9e4aa32a2c2aea84c8996524) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b7dc4e9e9e4aa32a2c2aea84c8996524);
        cache_frame_b7dc4e9e9e4aa32a2c2aea84c8996524 = NULL;
    }

    assertFrameObject(frame_b7dc4e9e9e4aa32a2c2aea84c8996524);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__10_is_returnable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_41d4b755992caba765f3baa252646069;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_41d4b755992caba765f3baa252646069 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_41d4b755992caba765f3baa252646069)) {
        Py_XDECREF(cache_frame_41d4b755992caba765f3baa252646069);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41d4b755992caba765f3baa252646069 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41d4b755992caba765f3baa252646069 = MAKE_FUNCTION_FRAME(tstate, codeobj_41d4b755992caba765f3baa252646069, module_prompt_toolkit$key_binding$bindings$emacs, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_41d4b755992caba765f3baa252646069->m_type_description == NULL);
    frame_41d4b755992caba765f3baa252646069 = cache_frame_41d4b755992caba765f3baa252646069;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_41d4b755992caba765f3baa252646069);
    assert(Py_REFCNT(frame_41d4b755992caba765f3baa252646069) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[191]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        frame_41d4b755992caba765f3baa252646069->m_frame.f_lineno = 147;
        tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[180]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[98]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

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
        exception_tb = MAKE_TRACEBACK(frame_41d4b755992caba765f3baa252646069, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41d4b755992caba765f3baa252646069->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41d4b755992caba765f3baa252646069, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41d4b755992caba765f3baa252646069,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_41d4b755992caba765f3baa252646069 == cache_frame_41d4b755992caba765f3baa252646069) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_41d4b755992caba765f3baa252646069);
        cache_frame_41d4b755992caba765f3baa252646069 = NULL;
    }

    assertFrameObject(frame_41d4b755992caba765f3baa252646069);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__11_character_search(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_buff = python_pars[0];
    PyObject *par_char = python_pars[1];
    PyObject *par_count = python_pars[2];
    PyObject *var_match = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_6c312a4a8bbb23d1f1f1f711ebeb99b6;
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
    static struct Nuitka_FrameObject *cache_frame_6c312a4a8bbb23d1f1f1f711ebeb99b6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6c312a4a8bbb23d1f1f1f711ebeb99b6)) {
        Py_XDECREF(cache_frame_6c312a4a8bbb23d1f1f1f711ebeb99b6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6c312a4a8bbb23d1f1f1f711ebeb99b6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6c312a4a8bbb23d1f1f1f711ebeb99b6 = MAKE_FUNCTION_FRAME(tstate, codeobj_6c312a4a8bbb23d1f1f1f711ebeb99b6, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6c312a4a8bbb23d1f1f1f711ebeb99b6->m_type_description == NULL);
    frame_6c312a4a8bbb23d1f1f1f711ebeb99b6 = cache_frame_6c312a4a8bbb23d1f1f1f711ebeb99b6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6c312a4a8bbb23d1f1f1f711ebeb99b6);
    assert(Py_REFCNT(frame_6c312a4a8bbb23d1f1f1f711ebeb99b6) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_count);
        tmp_cmp_expr_left_1 = par_count;
        tmp_cmp_expr_right_1 = mod_consts[195];
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_buff);
        tmp_expression_value_2 = par_buff;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[196]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[197]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_char);
        tmp_kw_call_arg_value_0_1 = par_char;
        tmp_kw_call_dict_value_0_1 = Py_True;
        CHECK_OBJECT(par_count);
        tmp_operand_value_1 = par_count;
        tmp_kw_call_dict_value_1_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_6c312a4a8bbb23d1f1f1f711ebeb99b6->m_frame.f_lineno = 161;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[198]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_match == NULL);
        var_match = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        CHECK_OBJECT(par_buff);
        tmp_expression_value_4 = par_buff;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[196]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[199]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_char);
        tmp_kw_call_arg_value_0_2 = par_char;
        tmp_kw_call_dict_value_0_2 = Py_True;
        CHECK_OBJECT(par_count);
        tmp_kw_call_dict_value_1_2 = par_count;
        frame_6c312a4a8bbb23d1f1f1f711ebeb99b6->m_frame.f_lineno = 165;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[198]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_match == NULL);
        var_match = tmp_assign_source_2;
    }
    branch_end_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_match);
        tmp_cmp_expr_left_2 = var_match;
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_5;
        if (par_buff == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[200]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_buff;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[201]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_match);
        tmp_iadd_expr_right_1 = var_match;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_4;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (par_buff == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[200]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 168;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_1 = par_buff;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[201], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto try_except_handler_2;
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6c312a4a8bbb23d1f1f1f711ebeb99b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6c312a4a8bbb23d1f1f1f711ebeb99b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6c312a4a8bbb23d1f1f1f711ebeb99b6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6c312a4a8bbb23d1f1f1f711ebeb99b6,
        type_description_1,
        par_buff,
        par_char,
        par_count,
        var_match
    );


    // Release cached frame if used for exception.
    if (frame_6c312a4a8bbb23d1f1f1f711ebeb99b6 == cache_frame_6c312a4a8bbb23d1f1f1f711ebeb99b6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6c312a4a8bbb23d1f1f1f711ebeb99b6);
        cache_frame_6c312a4a8bbb23d1f1f1f711ebeb99b6 = NULL;
    }

    assertFrameObject(frame_6c312a4a8bbb23d1f1f1f711ebeb99b6);

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
    Py_XDECREF(var_match);
    var_match = NULL;
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

    Py_XDECREF(var_match);
    var_match = NULL;
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
    CHECK_OBJECT(par_buff);
    Py_DECREF(par_buff);
    CHECK_OBJECT(par_char);
    Py_DECREF(par_char);
    CHECK_OBJECT(par_count);
    Py_DECREF(par_count);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_buff);
    Py_DECREF(par_buff);
    CHECK_OBJECT(par_char);
    Py_DECREF(par_char);
    CHECK_OBJECT(par_count);
    Py_DECREF(par_count);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__12__goto_char(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_a9a514533e56ba2360e9795b996bfd7f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a9a514533e56ba2360e9795b996bfd7f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a9a514533e56ba2360e9795b996bfd7f)) {
        Py_XDECREF(cache_frame_a9a514533e56ba2360e9795b996bfd7f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a9a514533e56ba2360e9795b996bfd7f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a9a514533e56ba2360e9795b996bfd7f = MAKE_FUNCTION_FRAME(tstate, codeobj_a9a514533e56ba2360e9795b996bfd7f, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a9a514533e56ba2360e9795b996bfd7f->m_type_description == NULL);
    frame_a9a514533e56ba2360e9795b996bfd7f = cache_frame_a9a514533e56ba2360e9795b996bfd7f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a9a514533e56ba2360e9795b996bfd7f);
    assert(Py_REFCNT(frame_a9a514533e56ba2360e9795b996bfd7f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 174;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[202]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 174;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_3 = par_event;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[183]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 174;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_a9a514533e56ba2360e9795b996bfd7f->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
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
        exception_tb = MAKE_TRACEBACK(frame_a9a514533e56ba2360e9795b996bfd7f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a9a514533e56ba2360e9795b996bfd7f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a9a514533e56ba2360e9795b996bfd7f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a9a514533e56ba2360e9795b996bfd7f,
        type_description_1,
        par_event,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_a9a514533e56ba2360e9795b996bfd7f == cache_frame_a9a514533e56ba2360e9795b996bfd7f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a9a514533e56ba2360e9795b996bfd7f);
        cache_frame_a9a514533e56ba2360e9795b996bfd7f = NULL;
    }

    assertFrameObject(frame_a9a514533e56ba2360e9795b996bfd7f);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__13__goto_char_backwards(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_8900067fe36cdfa65714f06cfbbc4514;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8900067fe36cdfa65714f06cfbbc4514 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8900067fe36cdfa65714f06cfbbc4514)) {
        Py_XDECREF(cache_frame_8900067fe36cdfa65714f06cfbbc4514);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8900067fe36cdfa65714f06cfbbc4514 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8900067fe36cdfa65714f06cfbbc4514 = MAKE_FUNCTION_FRAME(tstate, codeobj_8900067fe36cdfa65714f06cfbbc4514, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8900067fe36cdfa65714f06cfbbc4514->m_type_description == NULL);
    frame_8900067fe36cdfa65714f06cfbbc4514 = cache_frame_8900067fe36cdfa65714f06cfbbc4514;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8900067fe36cdfa65714f06cfbbc4514);
    assert(Py_REFCNT(frame_8900067fe36cdfa65714f06cfbbc4514) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 180;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[202]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 180;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_3 = par_event;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[183]);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 180;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 180;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_8900067fe36cdfa65714f06cfbbc4514->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
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
        exception_tb = MAKE_TRACEBACK(frame_8900067fe36cdfa65714f06cfbbc4514, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8900067fe36cdfa65714f06cfbbc4514->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8900067fe36cdfa65714f06cfbbc4514, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8900067fe36cdfa65714f06cfbbc4514,
        type_description_1,
        par_event,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_8900067fe36cdfa65714f06cfbbc4514 == cache_frame_8900067fe36cdfa65714f06cfbbc4514) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8900067fe36cdfa65714f06cfbbc4514);
        cache_frame_8900067fe36cdfa65714f06cfbbc4514 = NULL;
    }

    assertFrameObject(frame_8900067fe36cdfa65714f06cfbbc4514);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__17__insert_all_completions(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_buff = NULL;
    PyObject *var_complete_event = NULL;
    PyObject *var_completions = NULL;
    PyObject *var_text_to_insert = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_e3e7281b4b9a37d9dc6043358587445d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e3e7281b4b9a37d9dc6043358587445d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e3e7281b4b9a37d9dc6043358587445d)) {
        Py_XDECREF(cache_frame_e3e7281b4b9a37d9dc6043358587445d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e3e7281b4b9a37d9dc6043358587445d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e3e7281b4b9a37d9dc6043358587445d = MAKE_FUNCTION_FRAME(tstate, codeobj_e3e7281b4b9a37d9dc6043358587445d, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e3e7281b4b9a37d9dc6043358587445d->m_type_description == NULL);
    frame_e3e7281b4b9a37d9dc6043358587445d = cache_frame_e3e7281b4b9a37d9dc6043358587445d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e3e7281b4b9a37d9dc6043358587445d);
    assert(Py_REFCNT(frame_e3e7281b4b9a37d9dc6043358587445d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_buff == NULL);
        var_buff = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[203]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_e3e7281b4b9a37d9dc6043358587445d->m_frame.f_lineno = 207;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[204], 0), mod_consts[205]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_complete_event == NULL);
        var_complete_event = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_buff);
        tmp_expression_value_3 = var_buff;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[206]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[207]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buff);
        tmp_expression_value_4 = var_buff;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[196]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 209;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_complete_event);
        tmp_args_element_value_2 = var_complete_event;
        frame_e3e7281b4b9a37d9dc6043358587445d->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_list_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST(tstate, tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_completions == NULL);
        var_completions = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[208];
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_completions);
            tmp_iter_arg_1 = var_completions;
            tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_5;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_iterable_value_1 = MAKE_GENERATOR_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__17__insert_all_completions$$$genexpr__1_genexpr(tmp_closure_1);

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
        tmp_assign_source_4 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_text_to_insert == NULL);
        var_text_to_insert = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_buff);
        tmp_called_instance_1 = var_buff;
        CHECK_OBJECT(var_text_to_insert);
        tmp_args_element_value_3 = var_text_to_insert;
        frame_e3e7281b4b9a37d9dc6043358587445d->m_frame.f_lineno = 214;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[209], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e3e7281b4b9a37d9dc6043358587445d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e3e7281b4b9a37d9dc6043358587445d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e3e7281b4b9a37d9dc6043358587445d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e3e7281b4b9a37d9dc6043358587445d,
        type_description_1,
        par_event,
        var_buff,
        var_complete_event,
        var_completions,
        var_text_to_insert
    );


    // Release cached frame if used for exception.
    if (frame_e3e7281b4b9a37d9dc6043358587445d == cache_frame_e3e7281b4b9a37d9dc6043358587445d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e3e7281b4b9a37d9dc6043358587445d);
        cache_frame_e3e7281b4b9a37d9dc6043358587445d = NULL;
    }

    assertFrameObject(frame_e3e7281b4b9a37d9dc6043358587445d);

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
    CHECK_OBJECT(var_buff);
    Py_DECREF(var_buff);
    var_buff = NULL;
    CHECK_OBJECT(var_complete_event);
    Py_DECREF(var_complete_event);
    var_complete_event = NULL;
    CHECK_OBJECT(var_completions);
    Py_DECREF(var_completions);
    var_completions = NULL;
    CHECK_OBJECT(var_text_to_insert);
    Py_DECREF(var_text_to_insert);
    var_text_to_insert = NULL;
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

    Py_XDECREF(var_buff);
    var_buff = NULL;
    Py_XDECREF(var_complete_event);
    var_complete_event = NULL;
    Py_XDECREF(var_completions);
    var_completions = NULL;
    Py_XDECREF(var_text_to_insert);
    var_text_to_insert = NULL;
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



#if 1
struct prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__17__insert_all_completions$$$genexpr__1_genexpr_locals {
    PyObject *var_c;
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

static PyObject *prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__17__insert_all_completions$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__17__insert_all_completions$$$genexpr__1_genexpr_locals *generator_heap = (struct prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__17__insert_all_completions$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_fc8c9d855b2f6073d2edfd877307bcca, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 213;
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_c);
        tmp_expression_value_2 = generator_heap->var_c;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[210]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 213;
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

static PyObject *MAKE_GENERATOR_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__17__insert_all_completions$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__17__insert_all_completions$$$genexpr__1_genexpr_context,
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[211],
#if PYTHON_VERSION >= 0x350
        mod_consts[212],
#endif
        codeobj_fc8c9d855b2f6073d2edfd877307bcca,
        closure,
        1,
#if 1
        sizeof(struct prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__17__insert_all_completions$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__18__toggle_start_end(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_buffer = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_inplace_assign_2__value = NULL;
    struct Nuitka_FrameObject *frame_e731c537f0eb68afd9ceb730b9316cd6;
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
    static struct Nuitka_FrameObject *cache_frame_e731c537f0eb68afd9ceb730b9316cd6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e731c537f0eb68afd9ceb730b9316cd6)) {
        Py_XDECREF(cache_frame_e731c537f0eb68afd9ceb730b9316cd6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e731c537f0eb68afd9ceb730b9316cd6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e731c537f0eb68afd9ceb730b9316cd6 = MAKE_FUNCTION_FRAME(tstate, codeobj_e731c537f0eb68afd9ceb730b9316cd6, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e731c537f0eb68afd9ceb730b9316cd6->m_type_description == NULL);
    frame_e731c537f0eb68afd9ceb730b9316cd6 = cache_frame_e731c537f0eb68afd9ceb730b9316cd6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e731c537f0eb68afd9ceb730b9316cd6);
    assert(Py_REFCNT(frame_e731c537f0eb68afd9ceb730b9316cd6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_buffer == NULL);
        var_buffer = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_3 = var_buffer;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[196]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[213]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_4 = var_buffer;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[201]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_6 = var_buffer;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[196]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[214]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_e731c537f0eb68afd9ceb730b9316cd6->m_frame.f_lineno = 225;
        tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[215], 0), mod_consts[216]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_3;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_buffer);
        tmp_assattr_target_1 = var_buffer;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[201], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oo";
            goto try_except_handler_2;
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_7 = var_buffer;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[201]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_2__value == NULL);
        tmp_inplace_assign_2__value = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_iadd_expr_left_2 = tmp_inplace_assign_2__value;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_8 = var_buffer;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[196]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        frame_e731c537f0eb68afd9ceb730b9316cd6->m_frame.f_lineno = 229;
        tmp_iadd_expr_right_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[217]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_assign_source_5 = tmp_iadd_expr_left_2;
        tmp_inplace_assign_2__value = tmp_assign_source_5;

    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_assattr_value_2 = tmp_inplace_assign_2__value;
        CHECK_OBJECT(var_buffer);
        tmp_assattr_target_2 = var_buffer;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[201], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
    }
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

    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e731c537f0eb68afd9ceb730b9316cd6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e731c537f0eb68afd9ceb730b9316cd6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e731c537f0eb68afd9ceb730b9316cd6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e731c537f0eb68afd9ceb730b9316cd6,
        type_description_1,
        par_event,
        var_buffer
    );


    // Release cached frame if used for exception.
    if (frame_e731c537f0eb68afd9ceb730b9316cd6 == cache_frame_e731c537f0eb68afd9ceb730b9316cd6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e731c537f0eb68afd9ceb730b9316cd6);
        cache_frame_e731c537f0eb68afd9ceb730b9316cd6 = NULL;
    }

    assertFrameObject(frame_e731c537f0eb68afd9ceb730b9316cd6);

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
    CHECK_OBJECT(var_buffer);
    Py_DECREF(var_buffer);
    var_buffer = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_buffer);
    var_buffer = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__19__start_selection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_buff = NULL;
    struct Nuitka_FrameObject *frame_032208caabe41cc9d5aec26542d2347d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_032208caabe41cc9d5aec26542d2347d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_032208caabe41cc9d5aec26542d2347d)) {
        Py_XDECREF(cache_frame_032208caabe41cc9d5aec26542d2347d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_032208caabe41cc9d5aec26542d2347d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_032208caabe41cc9d5aec26542d2347d = MAKE_FUNCTION_FRAME(tstate, codeobj_032208caabe41cc9d5aec26542d2347d, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_032208caabe41cc9d5aec26542d2347d->m_type_description == NULL);
    frame_032208caabe41cc9d5aec26542d2347d = cache_frame_032208caabe41cc9d5aec26542d2347d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_032208caabe41cc9d5aec26542d2347d);
    assert(Py_REFCNT(frame_032208caabe41cc9d5aec26542d2347d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_buff == NULL);
        var_buff = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_buff);
        tmp_expression_value_2 = var_buff;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[210]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_buff);
        tmp_expression_value_3 = var_buff;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[218]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[219]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[219]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 239;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[220]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 239;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_032208caabe41cc9d5aec26542d2347d->m_frame.f_lineno = 239;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[221]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_032208caabe41cc9d5aec26542d2347d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_032208caabe41cc9d5aec26542d2347d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_032208caabe41cc9d5aec26542d2347d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_032208caabe41cc9d5aec26542d2347d,
        type_description_1,
        par_event,
        var_buff
    );


    // Release cached frame if used for exception.
    if (frame_032208caabe41cc9d5aec26542d2347d == cache_frame_032208caabe41cc9d5aec26542d2347d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_032208caabe41cc9d5aec26542d2347d);
        cache_frame_032208caabe41cc9d5aec26542d2347d = NULL;
    }

    assertFrameObject(frame_032208caabe41cc9d5aec26542d2347d);

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
    CHECK_OBJECT(var_buff);
    Py_DECREF(var_buff);
    var_buff = NULL;
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

    Py_XDECREF(var_buff);
    var_buff = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__20__cancel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_0b7f5df186f595969f731e55c75da9c9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0b7f5df186f595969f731e55c75da9c9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0b7f5df186f595969f731e55c75da9c9)) {
        Py_XDECREF(cache_frame_0b7f5df186f595969f731e55c75da9c9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0b7f5df186f595969f731e55c75da9c9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0b7f5df186f595969f731e55c75da9c9 = MAKE_FUNCTION_FRAME(tstate, codeobj_0b7f5df186f595969f731e55c75da9c9, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0b7f5df186f595969f731e55c75da9c9->m_type_description == NULL);
    frame_0b7f5df186f595969f731e55c75da9c9 = cache_frame_0b7f5df186f595969f731e55c75da9c9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0b7f5df186f595969f731e55c75da9c9);
    assert(Py_REFCNT(frame_0b7f5df186f595969f731e55c75da9c9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_1;
        tmp_assattr_value_1 = Py_None;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[222], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_value_2;
        tmp_assattr_value_2 = Py_None;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[180]);
        if (tmp_assattr_target_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[223], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0b7f5df186f595969f731e55c75da9c9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0b7f5df186f595969f731e55c75da9c9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b7f5df186f595969f731e55c75da9c9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0b7f5df186f595969f731e55c75da9c9,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_0b7f5df186f595969f731e55c75da9c9 == cache_frame_0b7f5df186f595969f731e55c75da9c9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0b7f5df186f595969f731e55c75da9c9);
        cache_frame_0b7f5df186f595969f731e55c75da9c9 = NULL;
    }

    assertFrameObject(frame_0b7f5df186f595969f731e55c75da9c9);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__21__cancel_selection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_3d85267377fe62d033b889b60fb27539;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3d85267377fe62d033b889b60fb27539 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3d85267377fe62d033b889b60fb27539)) {
        Py_XDECREF(cache_frame_3d85267377fe62d033b889b60fb27539);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3d85267377fe62d033b889b60fb27539 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3d85267377fe62d033b889b60fb27539 = MAKE_FUNCTION_FRAME(tstate, codeobj_3d85267377fe62d033b889b60fb27539, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3d85267377fe62d033b889b60fb27539->m_type_description == NULL);
    frame_3d85267377fe62d033b889b60fb27539 = cache_frame_3d85267377fe62d033b889b60fb27539;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3d85267377fe62d033b889b60fb27539);
    assert(Py_REFCNT(frame_3d85267377fe62d033b889b60fb27539) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3d85267377fe62d033b889b60fb27539->m_frame.f_lineno = 254;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[224]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
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
        exception_tb = MAKE_TRACEBACK(frame_3d85267377fe62d033b889b60fb27539, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3d85267377fe62d033b889b60fb27539->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3d85267377fe62d033b889b60fb27539, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3d85267377fe62d033b889b60fb27539,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_3d85267377fe62d033b889b60fb27539 == cache_frame_3d85267377fe62d033b889b60fb27539) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3d85267377fe62d033b889b60fb27539);
        cache_frame_3d85267377fe62d033b889b60fb27539 = NULL;
    }

    assertFrameObject(frame_3d85267377fe62d033b889b60fb27539);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__22__cut(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_438b5f33ad70432c0c9c4a39f34fbe23;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_438b5f33ad70432c0c9c4a39f34fbe23 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_438b5f33ad70432c0c9c4a39f34fbe23)) {
        Py_XDECREF(cache_frame_438b5f33ad70432c0c9c4a39f34fbe23);

#if _DEBUG_REFCOUNTS
        if (cache_frame_438b5f33ad70432c0c9c4a39f34fbe23 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_438b5f33ad70432c0c9c4a39f34fbe23 = MAKE_FUNCTION_FRAME(tstate, codeobj_438b5f33ad70432c0c9c4a39f34fbe23, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_438b5f33ad70432c0c9c4a39f34fbe23->m_type_description == NULL);
    frame_438b5f33ad70432c0c9c4a39f34fbe23 = cache_frame_438b5f33ad70432c0c9c4a39f34fbe23;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_438b5f33ad70432c0c9c4a39f34fbe23);
    assert(Py_REFCNT(frame_438b5f33ad70432c0c9c4a39f34fbe23) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_438b5f33ad70432c0c9c4a39f34fbe23->m_frame.f_lineno = 262;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[225]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
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
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[194]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[226]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_args_element_value_1 = var_data;
        frame_438b5f33ad70432c0c9c4a39f34fbe23->m_frame.f_lineno = 263;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[227], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
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
        exception_tb = MAKE_TRACEBACK(frame_438b5f33ad70432c0c9c4a39f34fbe23, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_438b5f33ad70432c0c9c4a39f34fbe23->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_438b5f33ad70432c0c9c4a39f34fbe23, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_438b5f33ad70432c0c9c4a39f34fbe23,
        type_description_1,
        par_event,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_438b5f33ad70432c0c9c4a39f34fbe23 == cache_frame_438b5f33ad70432c0c9c4a39f34fbe23) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_438b5f33ad70432c0c9c4a39f34fbe23);
        cache_frame_438b5f33ad70432c0c9c4a39f34fbe23 = NULL;
    }

    assertFrameObject(frame_438b5f33ad70432c0c9c4a39f34fbe23);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__23__copy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_50548cce560e2155aacf4f7270dff7f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_50548cce560e2155aacf4f7270dff7f4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_50548cce560e2155aacf4f7270dff7f4)) {
        Py_XDECREF(cache_frame_50548cce560e2155aacf4f7270dff7f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_50548cce560e2155aacf4f7270dff7f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_50548cce560e2155aacf4f7270dff7f4 = MAKE_FUNCTION_FRAME(tstate, codeobj_50548cce560e2155aacf4f7270dff7f4, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_50548cce560e2155aacf4f7270dff7f4->m_type_description == NULL);
    frame_50548cce560e2155aacf4f7270dff7f4 = cache_frame_50548cce560e2155aacf4f7270dff7f4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_50548cce560e2155aacf4f7270dff7f4);
    assert(Py_REFCNT(frame_50548cce560e2155aacf4f7270dff7f4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_50548cce560e2155aacf4f7270dff7f4->m_frame.f_lineno = 270;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[228]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
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
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[194]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[226]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_args_element_value_1 = var_data;
        frame_50548cce560e2155aacf4f7270dff7f4->m_frame.f_lineno = 271;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[227], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
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
        exception_tb = MAKE_TRACEBACK(frame_50548cce560e2155aacf4f7270dff7f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_50548cce560e2155aacf4f7270dff7f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50548cce560e2155aacf4f7270dff7f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_50548cce560e2155aacf4f7270dff7f4,
        type_description_1,
        par_event,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_50548cce560e2155aacf4f7270dff7f4 == cache_frame_50548cce560e2155aacf4f7270dff7f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_50548cce560e2155aacf4f7270dff7f4);
        cache_frame_50548cce560e2155aacf4f7270dff7f4 = NULL;
    }

    assertFrameObject(frame_50548cce560e2155aacf4f7270dff7f4);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__24__start_of_word(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_buffer = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_e8adf8b6b5f22e5049899278a4f55f34;
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
    static struct Nuitka_FrameObject *cache_frame_e8adf8b6b5f22e5049899278a4f55f34 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e8adf8b6b5f22e5049899278a4f55f34)) {
        Py_XDECREF(cache_frame_e8adf8b6b5f22e5049899278a4f55f34);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e8adf8b6b5f22e5049899278a4f55f34 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e8adf8b6b5f22e5049899278a4f55f34 = MAKE_FUNCTION_FRAME(tstate, codeobj_e8adf8b6b5f22e5049899278a4f55f34, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e8adf8b6b5f22e5049899278a4f55f34->m_type_description == NULL);
    frame_e8adf8b6b5f22e5049899278a4f55f34 = cache_frame_e8adf8b6b5f22e5049899278a4f55f34;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e8adf8b6b5f22e5049899278a4f55f34);
    assert(Py_REFCNT(frame_e8adf8b6b5f22e5049899278a4f55f34) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_buffer == NULL);
        var_buffer = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_2 = var_buffer;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[201]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_4 = var_buffer;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[196]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[229]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_5 = par_event;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[183]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 280;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_e8adf8b6b5f22e5049899278a4f55f34->m_frame.f_lineno = 280;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_or_left_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[184]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 280;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[195];
        Py_INCREF(tmp_or_right_value_1);
        tmp_iadd_expr_right_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_iadd_expr_right_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_3;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_buffer);
        tmp_assattr_target_1 = var_buffer;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[201], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oo";
            goto try_except_handler_2;
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_e8adf8b6b5f22e5049899278a4f55f34, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e8adf8b6b5f22e5049899278a4f55f34->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e8adf8b6b5f22e5049899278a4f55f34, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e8adf8b6b5f22e5049899278a4f55f34,
        type_description_1,
        par_event,
        var_buffer
    );


    // Release cached frame if used for exception.
    if (frame_e8adf8b6b5f22e5049899278a4f55f34 == cache_frame_e8adf8b6b5f22e5049899278a4f55f34) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e8adf8b6b5f22e5049899278a4f55f34);
        cache_frame_e8adf8b6b5f22e5049899278a4f55f34 = NULL;
    }

    assertFrameObject(frame_e8adf8b6b5f22e5049899278a4f55f34);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_buffer);
    Py_DECREF(var_buffer);
    var_buffer = NULL;
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

    Py_XDECREF(var_buffer);
    var_buffer = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__25__start_next_word(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_buffer = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_bfd327b7e538eb4a7e7d2cdb62ae09f4;
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
    static struct Nuitka_FrameObject *cache_frame_bfd327b7e538eb4a7e7d2cdb62ae09f4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bfd327b7e538eb4a7e7d2cdb62ae09f4)) {
        Py_XDECREF(cache_frame_bfd327b7e538eb4a7e7d2cdb62ae09f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bfd327b7e538eb4a7e7d2cdb62ae09f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bfd327b7e538eb4a7e7d2cdb62ae09f4 = MAKE_FUNCTION_FRAME(tstate, codeobj_bfd327b7e538eb4a7e7d2cdb62ae09f4, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bfd327b7e538eb4a7e7d2cdb62ae09f4->m_type_description == NULL);
    frame_bfd327b7e538eb4a7e7d2cdb62ae09f4 = cache_frame_bfd327b7e538eb4a7e7d2cdb62ae09f4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bfd327b7e538eb4a7e7d2cdb62ae09f4);
    assert(Py_REFCNT(frame_bfd327b7e538eb4a7e7d2cdb62ae09f4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_buffer == NULL);
        var_buffer = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_2 = var_buffer;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[201]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_4 = var_buffer;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[196]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[230]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_5 = par_event;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[183]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 290;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_bfd327b7e538eb4a7e7d2cdb62ae09f4->m_frame.f_lineno = 290;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_or_left_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[184]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 290;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_6 = var_buffer;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[196]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_bfd327b7e538eb4a7e7d2cdb62ae09f4->m_frame.f_lineno = 291;
        tmp_or_right_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[231]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_or_right_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_iadd_expr_right_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_iadd_expr_right_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_3;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_buffer);
        tmp_assattr_target_1 = var_buffer;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[201], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oo";
            goto try_except_handler_2;
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_bfd327b7e538eb4a7e7d2cdb62ae09f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bfd327b7e538eb4a7e7d2cdb62ae09f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bfd327b7e538eb4a7e7d2cdb62ae09f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bfd327b7e538eb4a7e7d2cdb62ae09f4,
        type_description_1,
        par_event,
        var_buffer
    );


    // Release cached frame if used for exception.
    if (frame_bfd327b7e538eb4a7e7d2cdb62ae09f4 == cache_frame_bfd327b7e538eb4a7e7d2cdb62ae09f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bfd327b7e538eb4a7e7d2cdb62ae09f4);
        cache_frame_bfd327b7e538eb4a7e7d2cdb62ae09f4 = NULL;
    }

    assertFrameObject(frame_bfd327b7e538eb4a7e7d2cdb62ae09f4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_buffer);
    Py_DECREF(var_buffer);
    var_buffer = NULL;
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

    Py_XDECREF(var_buffer);
    var_buffer = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__26__complete(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_b = NULL;
    struct Nuitka_FrameObject *frame_77e0a3a0e7e44148dc17152e5f0b3cbd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_77e0a3a0e7e44148dc17152e5f0b3cbd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_77e0a3a0e7e44148dc17152e5f0b3cbd)) {
        Py_XDECREF(cache_frame_77e0a3a0e7e44148dc17152e5f0b3cbd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_77e0a3a0e7e44148dc17152e5f0b3cbd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_77e0a3a0e7e44148dc17152e5f0b3cbd = MAKE_FUNCTION_FRAME(tstate, codeobj_77e0a3a0e7e44148dc17152e5f0b3cbd, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_77e0a3a0e7e44148dc17152e5f0b3cbd->m_type_description == NULL);
    frame_77e0a3a0e7e44148dc17152e5f0b3cbd = cache_frame_77e0a3a0e7e44148dc17152e5f0b3cbd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_77e0a3a0e7e44148dc17152e5f0b3cbd);
    assert(Py_REFCNT(frame_77e0a3a0e7e44148dc17152e5f0b3cbd) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_b == NULL);
        var_b = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_b);
        tmp_expression_value_2 = var_b;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[222]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_b);
        tmp_called_instance_1 = var_b;
        frame_77e0a3a0e7e44148dc17152e5f0b3cbd->m_frame.f_lineno = 301;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[232]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_b);
        tmp_expression_value_3 = var_b;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[233]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_77e0a3a0e7e44148dc17152e5f0b3cbd->m_frame.f_lineno = 303;
        tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[234], 0), mod_consts[235]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_77e0a3a0e7e44148dc17152e5f0b3cbd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_77e0a3a0e7e44148dc17152e5f0b3cbd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_77e0a3a0e7e44148dc17152e5f0b3cbd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_77e0a3a0e7e44148dc17152e5f0b3cbd,
        type_description_1,
        par_event,
        var_b
    );


    // Release cached frame if used for exception.
    if (frame_77e0a3a0e7e44148dc17152e5f0b3cbd == cache_frame_77e0a3a0e7e44148dc17152e5f0b3cbd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_77e0a3a0e7e44148dc17152e5f0b3cbd);
        cache_frame_77e0a3a0e7e44148dc17152e5f0b3cbd = NULL;
    }

    assertFrameObject(frame_77e0a3a0e7e44148dc17152e5f0b3cbd);

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
    CHECK_OBJECT(var_b);
    Py_DECREF(var_b);
    var_b = NULL;
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

    Py_XDECREF(var_b);
    var_b = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__27__indent(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_buffer = NULL;
    PyObject *var_from_ = NULL;
    PyObject *var_to = NULL;
    PyObject *var__ = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f9e7a7fb98423c57aa4d43b4cf3b414b;
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
    PyObject *tmp_iterator_attempt;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f9e7a7fb98423c57aa4d43b4cf3b414b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f9e7a7fb98423c57aa4d43b4cf3b414b)) {
        Py_XDECREF(cache_frame_f9e7a7fb98423c57aa4d43b4cf3b414b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f9e7a7fb98423c57aa4d43b4cf3b414b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f9e7a7fb98423c57aa4d43b4cf3b414b = MAKE_FUNCTION_FRAME(tstate, codeobj_f9e7a7fb98423c57aa4d43b4cf3b414b, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f9e7a7fb98423c57aa4d43b4cf3b414b->m_type_description == NULL);
    frame_f9e7a7fb98423c57aa4d43b4cf3b414b = cache_frame_f9e7a7fb98423c57aa4d43b4cf3b414b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f9e7a7fb98423c57aa4d43b4cf3b414b);
    assert(Py_REFCNT(frame_f9e7a7fb98423c57aa4d43b4cf3b414b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_buffer == NULL);
        var_buffer = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_2 = var_buffer;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[201]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_4 = var_buffer;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[196]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[214]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_f9e7a7fb98423c57aa4d43b4cf3b414b->m_frame.f_lineno = 312;
        tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[234], 0), mod_consts[216]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_3;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_buffer);
        tmp_assattr_target_1 = var_buffer;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[201], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_5 = var_buffer;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[196]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        frame_f9e7a7fb98423c57aa4d43b4cf3b414b->m_frame.f_lineno = 316;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[236]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 316;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 316;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 316;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[237];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 316;
            goto try_except_handler_4;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert(var_from_ == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_from_ = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_to == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_to = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_6 = var_buffer;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[196]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_from_);
        tmp_args_element_value_1 = var_from_;
        frame_f9e7a7fb98423c57aa4d43b4cf3b414b->m_frame.f_lineno = 317;
        tmp_iter_arg_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[238], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 317;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 317;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 317;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[237];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 317;
            goto try_except_handler_6;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_from_;
            assert(old != NULL);
            var_from_ = tmp_assign_source_12;
            Py_INCREF(var_from_);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_13);
        var__ = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_7 = var_buffer;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[196]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_to);
        tmp_args_element_value_2 = var_to;
        frame_f9e7a7fb98423c57aa4d43b4cf3b414b->m_frame.f_lineno = 318;
        tmp_iter_arg_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[238], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooo";
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tstate, tmp_unpack_5, 0, 2);
        if (tmp_assign_source_15 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 318;
            goto try_except_handler_8;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tstate, tmp_unpack_6, 1, 2);
        if (tmp_assign_source_16 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 318;
            goto try_except_handler_8;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_16;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 318;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[237];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 318;
            goto try_except_handler_8;
        }
    }
    goto try_end_6;
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

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_6:;
    goto try_end_7;
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

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_17 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_to;
            assert(old != NULL);
            var_to = tmp_assign_source_17;
            Py_INCREF(var_to);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_18 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var__;
            assert(old != NULL);
            var__ = tmp_assign_source_18;
            Py_INCREF(var__);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_8;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[239]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[239]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buffer);
        tmp_kw_call_arg_value_0_1 = var_buffer;
        CHECK_OBJECT(var_from_);
        tmp_kw_call_arg_value_1_1 = var_from_;
        CHECK_OBJECT(var_to);
        tmp_add_expr_left_1 = var_to;
        tmp_add_expr_right_1 = mod_consts[240];
        tmp_kw_call_arg_value_2_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_8 = par_event;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[183]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_2_1);

            exception_lineno = 320;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_f9e7a7fb98423c57aa4d43b4cf3b414b->m_frame.f_lineno = 320;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[184]);
        }

        Py_DECREF(tmp_kw_call_arg_value_2_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f9e7a7fb98423c57aa4d43b4cf3b414b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f9e7a7fb98423c57aa4d43b4cf3b414b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f9e7a7fb98423c57aa4d43b4cf3b414b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f9e7a7fb98423c57aa4d43b4cf3b414b,
        type_description_1,
        par_event,
        var_buffer,
        var_from_,
        var_to,
        var__
    );


    // Release cached frame if used for exception.
    if (frame_f9e7a7fb98423c57aa4d43b4cf3b414b == cache_frame_f9e7a7fb98423c57aa4d43b4cf3b414b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f9e7a7fb98423c57aa4d43b4cf3b414b);
        cache_frame_f9e7a7fb98423c57aa4d43b4cf3b414b = NULL;
    }

    assertFrameObject(frame_f9e7a7fb98423c57aa4d43b4cf3b414b);

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
    CHECK_OBJECT(var_buffer);
    Py_DECREF(var_buffer);
    var_buffer = NULL;
    CHECK_OBJECT(var_from_);
    Py_DECREF(var_from_);
    var_from_ = NULL;
    CHECK_OBJECT(var_to);
    Py_DECREF(var_to);
    var_to = NULL;
    CHECK_OBJECT(var__);
    Py_DECREF(var__);
    var__ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_buffer);
    var_buffer = NULL;
    Py_XDECREF(var_from_);
    var_from_ = NULL;
    Py_XDECREF(var_to);
    var_to = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__28__unindent(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_buffer = NULL;
    PyObject *var_from_ = NULL;
    PyObject *var_to = NULL;
    PyObject *var__ = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_35615be4b33fdaec6ae64ebd77ca4cf7;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_35615be4b33fdaec6ae64ebd77ca4cf7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_35615be4b33fdaec6ae64ebd77ca4cf7)) {
        Py_XDECREF(cache_frame_35615be4b33fdaec6ae64ebd77ca4cf7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_35615be4b33fdaec6ae64ebd77ca4cf7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_35615be4b33fdaec6ae64ebd77ca4cf7 = MAKE_FUNCTION_FRAME(tstate, codeobj_35615be4b33fdaec6ae64ebd77ca4cf7, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_35615be4b33fdaec6ae64ebd77ca4cf7->m_type_description == NULL);
    frame_35615be4b33fdaec6ae64ebd77ca4cf7 = cache_frame_35615be4b33fdaec6ae64ebd77ca4cf7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_35615be4b33fdaec6ae64ebd77ca4cf7);
    assert(Py_REFCNT(frame_35615be4b33fdaec6ae64ebd77ca4cf7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_buffer == NULL);
        var_buffer = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_2 = var_buffer;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[196]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_35615be4b33fdaec6ae64ebd77ca4cf7->m_frame.f_lineno = 329;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[236]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 329;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 329;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 329;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[237];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 329;
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
        assert(var_from_ == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_from_ = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_to == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_to = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_3 = var_buffer;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[196]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_from_);
        tmp_args_element_value_1 = var_from_;
        frame_35615be4b33fdaec6ae64ebd77ca4cf7->m_frame.f_lineno = 330;
        tmp_iter_arg_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[238], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 330;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 330;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_9;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 330;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[237];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 330;
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
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_from_;
            assert(old != NULL);
            var_from_ = tmp_assign_source_10;
            Py_INCREF(var_from_);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_2__element_2;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_11);
        var__ = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_4 = var_buffer;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[196]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_to);
        tmp_args_element_value_2 = var_to;
        frame_35615be4b33fdaec6ae64ebd77ca4cf7->m_frame.f_lineno = 331;
        tmp_iter_arg_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[238], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tstate, tmp_unpack_5, 0, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 331;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tstate, tmp_unpack_6, 1, 2);
        if (tmp_assign_source_14 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 331;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_14;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 331;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[237];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 331;
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
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_to;
            assert(old != NULL);
            var_to = tmp_assign_source_15;
            Py_INCREF(var_to);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var__;
            assert(old != NULL);
            var__ = tmp_assign_source_16;
            Py_INCREF(var__);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[241]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[241]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buffer);
        tmp_kw_call_arg_value_0_1 = var_buffer;
        CHECK_OBJECT(var_from_);
        tmp_kw_call_arg_value_1_1 = var_from_;
        CHECK_OBJECT(var_to);
        tmp_add_expr_left_1 = var_to;
        tmp_add_expr_right_1 = mod_consts[240];
        tmp_kw_call_arg_value_2_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_5 = par_event;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[183]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_2_1);

            exception_lineno = 333;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_35615be4b33fdaec6ae64ebd77ca4cf7->m_frame.f_lineno = 333;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[184]);
        }

        Py_DECREF(tmp_kw_call_arg_value_2_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_35615be4b33fdaec6ae64ebd77ca4cf7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_35615be4b33fdaec6ae64ebd77ca4cf7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_35615be4b33fdaec6ae64ebd77ca4cf7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_35615be4b33fdaec6ae64ebd77ca4cf7,
        type_description_1,
        par_event,
        var_buffer,
        var_from_,
        var_to,
        var__
    );


    // Release cached frame if used for exception.
    if (frame_35615be4b33fdaec6ae64ebd77ca4cf7 == cache_frame_35615be4b33fdaec6ae64ebd77ca4cf7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_35615be4b33fdaec6ae64ebd77ca4cf7);
        cache_frame_35615be4b33fdaec6ae64ebd77ca4cf7 = NULL;
    }

    assertFrameObject(frame_35615be4b33fdaec6ae64ebd77ca4cf7);

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
    CHECK_OBJECT(var_buffer);
    Py_DECREF(var_buffer);
    var_buffer = NULL;
    CHECK_OBJECT(var_from_);
    Py_DECREF(var_from_);
    var_from_ = NULL;
    CHECK_OBJECT(var_to);
    Py_DECREF(var_to);
    var_to = NULL;
    CHECK_OBJECT(var__);
    Py_DECREF(var__);
    var__ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_buffer);
    var_buffer = NULL;
    Py_XDECREF(var_from_);
    var_from_ = NULL;
    Py_XDECREF(var_to);
    var_to = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__2_load_emacs_search_bindings(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_key_bindings = NULL;
    PyObject *var_handle = NULL;
    PyObject *var_search = NULL;
    PyObject *var__jump_next = NULL;
    PyObject *var__jump_prev = NULL;
    struct Nuitka_FrameObject *frame_af9079d33d20ecd21c0ad45ec7e538ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_af9079d33d20ecd21c0ad45ec7e538ec = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_af9079d33d20ecd21c0ad45ec7e538ec)) {
        Py_XDECREF(cache_frame_af9079d33d20ecd21c0ad45ec7e538ec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_af9079d33d20ecd21c0ad45ec7e538ec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_af9079d33d20ecd21c0ad45ec7e538ec = MAKE_FUNCTION_FRAME(tstate, codeobj_af9079d33d20ecd21c0ad45ec7e538ec, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_af9079d33d20ecd21c0ad45ec7e538ec->m_type_description == NULL);
    frame_af9079d33d20ecd21c0ad45ec7e538ec = cache_frame_af9079d33d20ecd21c0ad45ec7e538ec;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_af9079d33d20ecd21c0ad45ec7e538ec);
    assert(Py_REFCNT(frame_af9079d33d20ecd21c0ad45ec7e538ec) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 339;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_key_bindings == NULL);
        var_key_bindings = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_key_bindings);
        tmp_expression_value_1 = var_key_bindings;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_handle == NULL);
        var_handle = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[89];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[242];
        tmp_level_value_1 = mod_consts[240];
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 341;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[243],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[243]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_search == NULL);
        var_search = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_handle);
        tmp_called_value_3 = var_handle;
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 347;
        tmp_called_value_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_3, mod_consts[244]);

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_search);
        tmp_expression_value_2 = var_search;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[245]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 347;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 347;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_handle);
        tmp_called_value_5 = var_handle;
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 348;
        tmp_called_value_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_5, mod_consts[246]);

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_search);
        tmp_expression_value_3 = var_search;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[247]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 348;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 348;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_handle);
        tmp_called_value_7 = var_handle;
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 350;
        tmp_called_value_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_7, mod_consts[248]);

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_search);
        tmp_expression_value_4 = var_search;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[249]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 350;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 350;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_handle);
        tmp_called_value_9 = var_handle;
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 351;
        tmp_called_value_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_9, mod_consts[141]);

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_search);
        tmp_expression_value_5 = var_search;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[249]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 351;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 351;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_called_value_11;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_handle);
        tmp_called_value_11 = var_handle;
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 352;
        tmp_called_value_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_11, mod_consts[244]);

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_search);
        tmp_expression_value_6 = var_search;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[250]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 352;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 352;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_called_value_13;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_handle);
        tmp_called_value_13 = var_handle;
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 353;
        tmp_called_value_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_13, mod_consts[246]);

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_search);
        tmp_expression_value_7 = var_search;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[251]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 353;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 353;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_handle);
        tmp_called_value_15 = var_handle;
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 354;
        tmp_called_value_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_15, mod_consts[252]);

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_search);
        tmp_expression_value_8 = var_search;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[250]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 354;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 354;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_handle);
        tmp_called_value_17 = var_handle;
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 355;
        tmp_called_value_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_17, mod_consts[253]);

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_search);
        tmp_expression_value_9 = var_search;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[251]);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 355;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 355;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_called_value_19;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(var_handle);
        tmp_called_value_19 = var_handle;
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 356;
        tmp_called_value_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_19, mod_consts[103]);

        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_search);
        tmp_expression_value_10 = var_search;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[254]);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 356;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 356;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_called_value_21;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_handle);
        tmp_called_value_21 = var_handle;
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 359;
        tmp_called_value_20 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_21, &PyTuple_GET_ITEM(mod_consts[255], 0), mod_consts[256]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_search);
        tmp_expression_value_11 = var_search;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[254]);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 359;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 359;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_called_value_23;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(var_handle);
        tmp_called_value_23 = var_handle;
        tmp_bitand_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[257]);

        if (unlikely(tmp_bitand_expr_left_1 == NULL)) {
            tmp_bitand_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[257]);
        }

        if (tmp_bitand_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[258]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_1 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_1);
        if (tmp_bitand_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_right_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 370;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_called_value_22 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_23, mod_consts[259], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_search);
        tmp_expression_value_12 = var_search;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[245]);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 371;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 370;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_called_value_25;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(var_handle);
        tmp_called_value_25 = var_handle;
        tmp_bitand_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[257]);

        if (unlikely(tmp_bitand_expr_left_2 == NULL)) {
            tmp_bitand_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[257]);
        }

        if (tmp_bitand_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_operand_value_2 == NULL)) {
            tmp_operand_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[258]);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_2 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_2);
        if (tmp_bitand_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        Py_DECREF(tmp_bitand_expr_right_2);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 373;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_called_value_24 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_25, mod_consts[260], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_search);
        tmp_expression_value_13 = var_search;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[247]);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 374;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 373;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_called_value_27;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_bitand_expr_left_3;
        PyObject *tmp_bitand_expr_right_3;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(var_handle);
        tmp_called_value_27 = var_handle;
        tmp_bitand_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[257]);

        if (unlikely(tmp_bitand_expr_left_3 == NULL)) {
            tmp_bitand_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[257]);
        }

        if (tmp_bitand_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_bitand_expr_right_3 == NULL)) {
            tmp_bitand_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[258]);
        }

        if (tmp_bitand_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 376;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
            tmp_called_value_26 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_27, mod_consts[259], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_search);
        tmp_expression_value_14 = var_search;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[247]);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 377;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 376;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_called_value_29;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_bitand_expr_left_4;
        PyObject *tmp_bitand_expr_right_4;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(var_handle);
        tmp_called_value_29 = var_handle;
        tmp_bitand_expr_left_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[257]);

        if (unlikely(tmp_bitand_expr_left_4 == NULL)) {
            tmp_bitand_expr_left_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[257]);
        }

        if (tmp_bitand_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_bitand_expr_right_4 == NULL)) {
            tmp_bitand_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[258]);
        }

        if (tmp_bitand_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
        if (tmp_kw_call_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 379;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};
            tmp_called_value_28 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_29, mod_consts[260], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_4);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_search);
        tmp_expression_value_15 = var_search;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[245]);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 380;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 379;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_30;
        PyObject *tmp_called_value_31;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_annotations_1;
        CHECK_OBJECT(var_handle);
        tmp_called_value_31 = var_handle;
        tmp_kw_call_value_0_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[257]);

        if (unlikely(tmp_kw_call_value_0_5 == NULL)) {
            tmp_kw_call_value_0_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[257]);
        }

        if (tmp_kw_call_value_0_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 383;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};
            tmp_called_value_30 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_31, mod_consts[261], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_15 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__2_load_emacs_search_bindings$$$function__1__jump_next(tmp_annotations_1);

        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 383;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var__jump_next == NULL);
        var__jump_next = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_32;
        PyObject *tmp_called_value_33;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_annotations_2;
        CHECK_OBJECT(var_handle);
        tmp_called_value_33 = var_handle;
        tmp_kw_call_value_0_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[257]);

        if (unlikely(tmp_kw_call_value_0_6 == NULL)) {
            tmp_kw_call_value_0_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[257]);
        }

        if (tmp_kw_call_value_0_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 392;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_6};
            tmp_called_value_32 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_33, mod_consts[265], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_16 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__2_load_emacs_search_bindings$$$function__2__jump_prev(tmp_annotations_2);

        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 392;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var__jump_prev == NULL);
        var__jump_prev = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[177]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[177]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_key_bindings);
        tmp_args_element_value_17 = var_key_bindings;
        tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_args_element_value_18 == NULL)) {
            tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[178]);
        }

        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame.f_lineno = 401;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_34, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
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
        exception_tb = MAKE_TRACEBACK(frame_af9079d33d20ecd21c0ad45ec7e538ec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_af9079d33d20ecd21c0ad45ec7e538ec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_af9079d33d20ecd21c0ad45ec7e538ec, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_af9079d33d20ecd21c0ad45ec7e538ec,
        type_description_1,
        var_key_bindings,
        var_handle,
        var_search,
        var__jump_next,
        var__jump_prev
    );


    // Release cached frame if used for exception.
    if (frame_af9079d33d20ecd21c0ad45ec7e538ec == cache_frame_af9079d33d20ecd21c0ad45ec7e538ec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_af9079d33d20ecd21c0ad45ec7e538ec);
        cache_frame_af9079d33d20ecd21c0ad45ec7e538ec = NULL;
    }

    assertFrameObject(frame_af9079d33d20ecd21c0ad45ec7e538ec);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_key_bindings);
    Py_DECREF(var_key_bindings);
    var_key_bindings = NULL;
    CHECK_OBJECT(var_handle);
    Py_DECREF(var_handle);
    var_handle = NULL;
    CHECK_OBJECT(var_search);
    Py_DECREF(var_search);
    var_search = NULL;
    CHECK_OBJECT(var__jump_next);
    Py_DECREF(var__jump_next);
    var__jump_next = NULL;
    CHECK_OBJECT(var__jump_prev);
    Py_DECREF(var__jump_prev);
    var__jump_prev = NULL;
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
    Py_XDECREF(var_handle);
    var_handle = NULL;
    Py_XDECREF(var_search);
    var_search = NULL;
    Py_XDECREF(var__jump_next);
    var__jump_next = NULL;
    Py_XDECREF(var__jump_prev);
    var__jump_prev = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__2_load_emacs_search_bindings$$$function__1__jump_next(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_ec1374382ec8daf14241ea547ca5baee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ec1374382ec8daf14241ea547ca5baee = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ec1374382ec8daf14241ea547ca5baee)) {
        Py_XDECREF(cache_frame_ec1374382ec8daf14241ea547ca5baee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ec1374382ec8daf14241ea547ca5baee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ec1374382ec8daf14241ea547ca5baee = MAKE_FUNCTION_FRAME(tstate, codeobj_ec1374382ec8daf14241ea547ca5baee, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ec1374382ec8daf14241ea547ca5baee->m_type_description == NULL);
    frame_ec1374382ec8daf14241ea547ca5baee = cache_frame_ec1374382ec8daf14241ea547ca5baee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ec1374382ec8daf14241ea547ca5baee);
    assert(Py_REFCNT(frame_ec1374382ec8daf14241ea547ca5baee) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[180]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[269]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_4 = par_event;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[194]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 387;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[270]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 387;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = Py_False;
        CHECK_OBJECT(par_event);
        tmp_expression_value_5 = par_event;
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[183]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 389;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ec1374382ec8daf14241ea547ca5baee->m_frame.f_lineno = 386;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[271]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
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
        exception_tb = MAKE_TRACEBACK(frame_ec1374382ec8daf14241ea547ca5baee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ec1374382ec8daf14241ea547ca5baee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ec1374382ec8daf14241ea547ca5baee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ec1374382ec8daf14241ea547ca5baee,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_ec1374382ec8daf14241ea547ca5baee == cache_frame_ec1374382ec8daf14241ea547ca5baee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ec1374382ec8daf14241ea547ca5baee);
        cache_frame_ec1374382ec8daf14241ea547ca5baee = NULL;
    }

    assertFrameObject(frame_ec1374382ec8daf14241ea547ca5baee);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__2_load_emacs_search_bindings$$$function__2__jump_prev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_53df876690609b3220b229e5a23cd329;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_53df876690609b3220b229e5a23cd329 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_53df876690609b3220b229e5a23cd329)) {
        Py_XDECREF(cache_frame_53df876690609b3220b229e5a23cd329);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53df876690609b3220b229e5a23cd329 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53df876690609b3220b229e5a23cd329 = MAKE_FUNCTION_FRAME(tstate, codeobj_53df876690609b3220b229e5a23cd329, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_53df876690609b3220b229e5a23cd329->m_type_description == NULL);
    frame_53df876690609b3220b229e5a23cd329 = cache_frame_53df876690609b3220b229e5a23cd329;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_53df876690609b3220b229e5a23cd329);
    assert(Py_REFCNT(frame_53df876690609b3220b229e5a23cd329) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[180]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[269]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_4 = par_event;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[194]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 396;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[270]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 396;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 396;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = Py_False;
        CHECK_OBJECT(par_event);
        tmp_expression_value_5 = par_event;
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[183]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 398;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_53df876690609b3220b229e5a23cd329->m_frame.f_lineno = 395;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[271]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
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
        exception_tb = MAKE_TRACEBACK(frame_53df876690609b3220b229e5a23cd329, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53df876690609b3220b229e5a23cd329->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53df876690609b3220b229e5a23cd329, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53df876690609b3220b229e5a23cd329,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_53df876690609b3220b229e5a23cd329 == cache_frame_53df876690609b3220b229e5a23cd329) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_53df876690609b3220b229e5a23cd329);
        cache_frame_53df876690609b3220b229e5a23cd329 = NULL;
    }

    assertFrameObject(frame_53df876690609b3220b229e5a23cd329);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_key_bindings = NULL;
    PyObject *var_handle = NULL;
    struct Nuitka_CellObject *var_unshift_move = Nuitka_Cell_Empty();
    PyObject *var__start_selection = NULL;
    PyObject *var__extend_selection = NULL;
    PyObject *var__replace_selection = NULL;
    PyObject *var__newline = NULL;
    PyObject *var__delete = NULL;
    PyObject *var__yank = NULL;
    PyObject *var__cancel = NULL;
    struct Nuitka_FrameObject *frame_c739f1e05f5c428c8b7a05480ecd2474;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c739f1e05f5c428c8b7a05480ecd2474 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c739f1e05f5c428c8b7a05480ecd2474)) {
        Py_XDECREF(cache_frame_c739f1e05f5c428c8b7a05480ecd2474);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c739f1e05f5c428c8b7a05480ecd2474 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c739f1e05f5c428c8b7a05480ecd2474 = MAKE_FUNCTION_FRAME(tstate, codeobj_c739f1e05f5c428c8b7a05480ecd2474, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c739f1e05f5c428c8b7a05480ecd2474->m_type_description == NULL);
    frame_c739f1e05f5c428c8b7a05480ecd2474 = cache_frame_c739f1e05f5c428c8b7a05480ecd2474;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c739f1e05f5c428c8b7a05480ecd2474);
    assert(Py_REFCNT(frame_c739f1e05f5c428c8b7a05480ecd2474) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 409;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_key_bindings == NULL);
        var_key_bindings = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_key_bindings);
        tmp_expression_value_1 = var_key_bindings;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_handle == NULL);
        var_handle = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[4]);


        tmp_assign_source_3 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__1_unshift_move(tmp_annotations_1);

        assert(Nuitka_Cell_GET(var_unshift_move) == NULL);
        PyCell_SET(var_unshift_move, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_8;
        PyObject *tmp_called_value_9;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_10;
        PyObject *tmp_called_value_11;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_12;
        PyObject *tmp_called_value_13;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_14;
        PyObject *tmp_called_value_15;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_16;
        PyObject *tmp_called_value_17;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_18;
        PyObject *tmp_called_value_19;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_20;
        PyObject *tmp_called_value_21;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_annotations_2;
        struct Nuitka_CellObject *tmp_closure_1[1];
        CHECK_OBJECT(var_handle);
        tmp_called_value_3 = var_handle;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 449;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_called_value_2 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_3, mod_consts[275], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_5 = var_handle;
        tmp_operand_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_operand_value_2 == NULL)) {
            tmp_operand_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 450;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_2);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 450;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 450;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_called_value_4 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_5, mod_consts[276], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 450;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_7 = var_handle;
        tmp_operand_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_operand_value_3 == NULL)) {
            tmp_operand_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_operand_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 451;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_3);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 451;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 451;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
            tmp_called_value_6 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_7, mod_consts[277], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 451;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_9 = var_handle;
        tmp_operand_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_operand_value_4 == NULL)) {
            tmp_operand_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_operand_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 452;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_4);
        if (tmp_kw_call_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 452;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 452;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};
            tmp_called_value_8 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_9, mod_consts[278], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_4);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 452;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_11 = var_handle;
        tmp_operand_value_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_operand_value_5 == NULL)) {
            tmp_operand_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_operand_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 453;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_5);
        if (tmp_kw_call_value_0_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 453;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 453;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};
            tmp_called_value_10 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_11, mod_consts[279], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_5);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 453;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_13 = var_handle;
        tmp_operand_value_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_operand_value_6 == NULL)) {
            tmp_operand_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_operand_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 454;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_6);
        if (tmp_kw_call_value_0_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 454;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 454;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_6};
            tmp_called_value_12 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_13, mod_consts[280], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_6);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 454;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_15 = var_handle;
        tmp_operand_value_7 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_operand_value_7 == NULL)) {
            tmp_operand_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_operand_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 455;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_7 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_7);
        if (tmp_kw_call_value_0_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 455;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 455;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_7};
            tmp_called_value_14 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_15, mod_consts[281], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_7);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 455;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_17 = var_handle;
        tmp_operand_value_8 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_operand_value_8 == NULL)) {
            tmp_operand_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_operand_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 456;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_8 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_8);
        if (tmp_kw_call_value_0_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 456;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 456;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_8};
            tmp_called_value_16 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_17, mod_consts[282], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_8);
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

            exception_lineno = 456;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_19 = var_handle;
        tmp_operand_value_9 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_operand_value_9 == NULL)) {
            tmp_operand_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_operand_value_9 == NULL) {
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

            exception_lineno = 457;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_9 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_9);
        if (tmp_kw_call_value_0_9 == NULL) {
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

            exception_lineno = 457;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 457;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_9};
            tmp_called_value_18 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_19, mod_consts[283], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_9);
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

            exception_lineno = 457;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_21 = var_handle;
        tmp_operand_value_10 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_operand_value_10 == NULL)) {
            tmp_operand_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_operand_value_10 == NULL) {
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

            exception_lineno = 458;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_10 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_10);
        if (tmp_kw_call_value_0_10 == NULL) {
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

            exception_lineno = 458;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 458;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_10};
            tmp_called_value_20 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_21, mod_consts[284], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_10);
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

            exception_lineno = 458;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = DICT_COPY(mod_consts[4]);

        tmp_closure_1[0] = var_unshift_move;
        Py_INCREF(tmp_closure_1[0]);

        tmp_args_element_value_10 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__2__start_selection(tmp_annotations_2, tmp_closure_1);

        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 458;
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

            exception_lineno = 458;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 457;
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

            exception_lineno = 457;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 456;
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

            exception_lineno = 456;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 455;
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

            exception_lineno = 455;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 454;
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

            exception_lineno = 454;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 453;
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

            exception_lineno = 453;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 452;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 452;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 451;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 451;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 450;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 450;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 449;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__start_selection == NULL);
        var__start_selection = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_22;
        PyObject *tmp_called_value_23;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_24;
        PyObject *tmp_called_value_25;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_26;
        PyObject *tmp_called_value_27;
        PyObject *tmp_kw_call_value_0_13;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_value_28;
        PyObject *tmp_called_value_29;
        PyObject *tmp_kw_call_value_0_14;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_30;
        PyObject *tmp_called_value_31;
        PyObject *tmp_kw_call_value_0_15;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_32;
        PyObject *tmp_called_value_33;
        PyObject *tmp_kw_call_value_0_16;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_34;
        PyObject *tmp_called_value_35;
        PyObject *tmp_kw_call_value_0_17;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_value_36;
        PyObject *tmp_called_value_37;
        PyObject *tmp_kw_call_value_0_18;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_38;
        PyObject *tmp_called_value_39;
        PyObject *tmp_kw_call_value_0_19;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_value_40;
        PyObject *tmp_called_value_41;
        PyObject *tmp_kw_call_value_0_20;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_annotations_3;
        struct Nuitka_CellObject *tmp_closure_2[1];
        CHECK_OBJECT(var_handle);
        tmp_called_value_23 = var_handle;
        tmp_kw_call_value_0_11 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_11 == NULL)) {
            tmp_kw_call_value_0_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 481;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_11};
            tmp_called_value_22 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_23, mod_consts[275], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_25 = var_handle;
        tmp_kw_call_value_0_12 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_12 == NULL)) {
            tmp_kw_call_value_0_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 482;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 482;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_12};
            tmp_called_value_24 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_25, mod_consts[276], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 482;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_27 = var_handle;
        tmp_kw_call_value_0_13 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_13 == NULL)) {
            tmp_kw_call_value_0_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 483;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 483;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_13};
            tmp_called_value_26 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_27, mod_consts[277], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 483;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_29 = var_handle;
        tmp_kw_call_value_0_14 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_14 == NULL)) {
            tmp_kw_call_value_0_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 484;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 484;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_14};
            tmp_called_value_28 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_29, mod_consts[278], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 484;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_31 = var_handle;
        tmp_kw_call_value_0_15 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_15 == NULL)) {
            tmp_kw_call_value_0_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 485;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 485;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_15};
            tmp_called_value_30 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_31, mod_consts[279], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 485;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_33 = var_handle;
        tmp_kw_call_value_0_16 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_16 == NULL)) {
            tmp_kw_call_value_0_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 486;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 486;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_16};
            tmp_called_value_32 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_33, mod_consts[280], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 486;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_35 = var_handle;
        tmp_kw_call_value_0_17 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_17 == NULL)) {
            tmp_kw_call_value_0_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 487;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 487;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_17};
            tmp_called_value_34 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_35, mod_consts[281], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 487;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_37 = var_handle;
        tmp_kw_call_value_0_18 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_18 == NULL)) {
            tmp_kw_call_value_0_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 488;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 488;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_18};
            tmp_called_value_36 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_37, mod_consts[282], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 488;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_39 = var_handle;
        tmp_kw_call_value_0_19 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_19 == NULL)) {
            tmp_kw_call_value_0_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 489;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 489;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_19};
            tmp_called_value_38 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_39, mod_consts[283], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 489;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_41 = var_handle;
        tmp_kw_call_value_0_20 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_20 == NULL)) {
            tmp_kw_call_value_0_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 490;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 490;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_20};
            tmp_called_value_40 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_41, mod_consts[284], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 490;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = DICT_COPY(mod_consts[4]);

        tmp_closure_2[0] = var_unshift_move;
        Py_INCREF(tmp_closure_2[0]);

        tmp_args_element_value_20 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__3__extend_selection(tmp_annotations_3, tmp_closure_2);

        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 490;
        tmp_args_element_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 490;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 489;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 489;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 488;
        tmp_args_element_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 488;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 487;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 487;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 486;
        tmp_args_element_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 486;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 485;
        tmp_args_element_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 485;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 484;
        tmp_args_element_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 484;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 483;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 483;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 482;
        tmp_args_element_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 482;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 481;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__extend_selection == NULL);
        var__extend_selection = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_42;
        PyObject *tmp_called_value_43;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_annotations_4;
        CHECK_OBJECT(var_handle);
        tmp_called_value_43 = var_handle;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[109]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
            tmp_kw_call_dict_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 504;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 504;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_called_value_42 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_43, args, kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_21 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__4__replace_selection(tmp_annotations_4);

        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 504;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__replace_selection == NULL);
        var__replace_selection = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_44;
        PyObject *tmp_called_value_45;
        PyObject *tmp_kw_call_value_0_21;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_annotations_5;
        CHECK_OBJECT(var_handle);
        tmp_called_value_45 = var_handle;
        tmp_bitand_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_bitand_expr_left_1 == NULL)) {
            tmp_bitand_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_bitand_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_bitand_expr_right_1 == NULL)) {
            tmp_bitand_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_bitand_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_21 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_kw_call_value_0_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 512;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_21};
            tmp_called_value_44 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_45, mod_consts[103], kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_21);
        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_22 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__5__newline(tmp_annotations_5);

        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 512;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__newline == NULL);
        var__newline = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_46;
        PyObject *tmp_called_value_47;
        PyObject *tmp_kw_call_value_0_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_annotations_6;
        CHECK_OBJECT(var_handle);
        tmp_called_value_47 = var_handle;
        tmp_kw_call_value_0_22 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_22 == NULL)) {
            tmp_kw_call_value_0_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 520;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_22};
            tmp_called_value_46 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_47, mod_consts[297], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_23 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__6__delete(tmp_annotations_6);

        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 520;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__delete == NULL);
        var__delete = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_48;
        PyObject *tmp_called_value_49;
        PyObject *tmp_kw_call_value_0_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_annotations_7;
        CHECK_OBJECT(var_handle);
        tmp_called_value_49 = var_handle;
        tmp_kw_call_value_0_23 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_23 == NULL)) {
            tmp_kw_call_value_0_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 527;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_23};
            tmp_called_value_48 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_49, mod_consts[26], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_24 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__7__yank(tmp_annotations_7);

        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 527;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__yank == NULL);
        var__yank = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_50;
        PyObject *tmp_called_value_51;
        PyObject *tmp_kw_call_value_0_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_called_value_52;
        PyObject *tmp_called_value_53;
        PyObject *tmp_kw_call_value_0_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_value_54;
        PyObject *tmp_called_value_55;
        PyObject *tmp_kw_call_value_0_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_called_value_56;
        PyObject *tmp_called_value_57;
        PyObject *tmp_kw_call_value_0_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_58;
        PyObject *tmp_called_value_59;
        PyObject *tmp_kw_call_value_0_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_called_value_60;
        PyObject *tmp_called_value_61;
        PyObject *tmp_kw_call_value_0_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_value_62;
        PyObject *tmp_called_value_63;
        PyObject *tmp_kw_call_value_0_30;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_called_value_64;
        PyObject *tmp_called_value_65;
        PyObject *tmp_kw_call_value_0_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_called_value_66;
        PyObject *tmp_called_value_67;
        PyObject *tmp_kw_call_value_0_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_value_68;
        PyObject *tmp_called_value_69;
        PyObject *tmp_kw_call_value_0_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_annotations_8;
        CHECK_OBJECT(var_handle);
        tmp_called_value_51 = var_handle;
        tmp_kw_call_value_0_24 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_24 == NULL)) {
            tmp_kw_call_value_0_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 538;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_24};
            tmp_called_value_50 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_51, mod_consts[304], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_53 = var_handle;
        tmp_kw_call_value_0_25 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_25 == NULL)) {
            tmp_kw_call_value_0_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 539;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 539;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_25};
            tmp_called_value_52 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_53, mod_consts[305], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 539;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_55 = var_handle;
        tmp_kw_call_value_0_26 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_26 == NULL)) {
            tmp_kw_call_value_0_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 540;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 540;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_26};
            tmp_called_value_54 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_55, mod_consts[252], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 540;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_57 = var_handle;
        tmp_kw_call_value_0_27 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_27 == NULL)) {
            tmp_kw_call_value_0_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 541;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 541;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_27};
            tmp_called_value_56 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_57, mod_consts[253], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 541;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_59 = var_handle;
        tmp_kw_call_value_0_28 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_28 == NULL)) {
            tmp_kw_call_value_0_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 542;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 542;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_28};
            tmp_called_value_58 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_59, mod_consts[306], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 542;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_61 = var_handle;
        tmp_kw_call_value_0_29 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_29 == NULL)) {
            tmp_kw_call_value_0_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 543;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 543;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_29};
            tmp_called_value_60 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_61, mod_consts[307], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 543;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_63 = var_handle;
        tmp_kw_call_value_0_30 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_30 == NULL)) {
            tmp_kw_call_value_0_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 544;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 544;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_30};
            tmp_called_value_62 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_63, mod_consts[20], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 544;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_65 = var_handle;
        tmp_kw_call_value_0_31 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_31 == NULL)) {
            tmp_kw_call_value_0_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 545;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 545;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_31};
            tmp_called_value_64 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_65, mod_consts[22], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 545;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_67 = var_handle;
        tmp_kw_call_value_0_32 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_32 == NULL)) {
            tmp_kw_call_value_0_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 546;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 546;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_32};
            tmp_called_value_66 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_67, mod_consts[42], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 546;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_69 = var_handle;
        tmp_kw_call_value_0_33 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_kw_call_value_0_33 == NULL)) {
            tmp_kw_call_value_0_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_kw_call_value_0_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 547;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 547;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_33};
            tmp_called_value_68 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_69, mod_consts[44], kw_values, mod_consts[14]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 547;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_34 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__8__cancel(tmp_annotations_8);

        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 547;
        tmp_args_element_value_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_68, tmp_args_element_value_34);
        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_args_element_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 547;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 546;
        tmp_args_element_value_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_66, tmp_args_element_value_33);
        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_args_element_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 546;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 545;
        tmp_args_element_value_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_64, tmp_args_element_value_32);
        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_args_element_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 545;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 544;
        tmp_args_element_value_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_62, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_62);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 544;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 543;
        tmp_args_element_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_60, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_args_element_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 543;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 542;
        tmp_args_element_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_29);
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_args_element_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 542;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 541;
        tmp_args_element_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_56, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_56);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_args_element_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 541;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 540;
        tmp_args_element_value_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_54, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_args_element_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 540;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 539;
        tmp_args_element_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_args_element_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 539;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 538;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__cancel == NULL);
        var__cancel = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[177]);

        if (unlikely(tmp_called_value_70 == NULL)) {
            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[177]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_key_bindings);
        tmp_args_element_value_35 = var_key_bindings;
        tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_args_element_value_36 == NULL)) {
            tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[178]);
        }

        if (tmp_args_element_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "oocooooooo";
            goto frame_exception_exit_1;
        }
        frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame.f_lineno = 557;
        {
            PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_70, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "oocooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_c739f1e05f5c428c8b7a05480ecd2474, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c739f1e05f5c428c8b7a05480ecd2474->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c739f1e05f5c428c8b7a05480ecd2474, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c739f1e05f5c428c8b7a05480ecd2474,
        type_description_1,
        var_key_bindings,
        var_handle,
        var_unshift_move,
        var__start_selection,
        var__extend_selection,
        var__replace_selection,
        var__newline,
        var__delete,
        var__yank,
        var__cancel
    );


    // Release cached frame if used for exception.
    if (frame_c739f1e05f5c428c8b7a05480ecd2474 == cache_frame_c739f1e05f5c428c8b7a05480ecd2474) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c739f1e05f5c428c8b7a05480ecd2474);
        cache_frame_c739f1e05f5c428c8b7a05480ecd2474 = NULL;
    }

    assertFrameObject(frame_c739f1e05f5c428c8b7a05480ecd2474);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_key_bindings);
    Py_DECREF(var_key_bindings);
    var_key_bindings = NULL;
    CHECK_OBJECT(var_handle);
    Py_DECREF(var_handle);
    var_handle = NULL;
    CHECK_OBJECT(var_unshift_move);
    Py_DECREF(var_unshift_move);
    var_unshift_move = NULL;
    CHECK_OBJECT(var__start_selection);
    Py_DECREF(var__start_selection);
    var__start_selection = NULL;
    CHECK_OBJECT(var__extend_selection);
    Py_DECREF(var__extend_selection);
    var__extend_selection = NULL;
    CHECK_OBJECT(var__replace_selection);
    Py_DECREF(var__replace_selection);
    var__replace_selection = NULL;
    CHECK_OBJECT(var__newline);
    Py_DECREF(var__newline);
    var__newline = NULL;
    CHECK_OBJECT(var__delete);
    Py_DECREF(var__delete);
    var__delete = NULL;
    CHECK_OBJECT(var__yank);
    Py_DECREF(var__yank);
    var__yank = NULL;
    CHECK_OBJECT(var__cancel);
    Py_DECREF(var__cancel);
    var__cancel = NULL;
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
    Py_XDECREF(var_handle);
    var_handle = NULL;
    CHECK_OBJECT(var_unshift_move);
    Py_DECREF(var_unshift_move);
    var_unshift_move = NULL;
    Py_XDECREF(var__start_selection);
    var__start_selection = NULL;
    Py_XDECREF(var__extend_selection);
    var__extend_selection = NULL;
    Py_XDECREF(var__replace_selection);
    var__replace_selection = NULL;
    Py_XDECREF(var__newline);
    var__newline = NULL;
    Py_XDECREF(var__delete);
    var__delete = NULL;
    Py_XDECREF(var__yank);
    var__yank = NULL;
    Py_XDECREF(var__cancel);
    var__cancel = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__1_unshift_move(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_key_to_command = NULL;
    PyObject *var_key = NULL;
    PyObject *var_binding = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_37fcf8236a8fd150bc418ca6c70b0005;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_37fcf8236a8fd150bc418ca6c70b0005 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_37fcf8236a8fd150bc418ca6c70b0005)) {
        Py_XDECREF(cache_frame_37fcf8236a8fd150bc418ca6c70b0005);

#if _DEBUG_REFCOUNTS
        if (cache_frame_37fcf8236a8fd150bc418ca6c70b0005 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_37fcf8236a8fd150bc418ca6c70b0005 = MAKE_FUNCTION_FRAME(tstate, codeobj_37fcf8236a8fd150bc418ca6c70b0005, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_37fcf8236a8fd150bc418ca6c70b0005->m_type_description == NULL);
    frame_37fcf8236a8fd150bc418ca6c70b0005 = cache_frame_37fcf8236a8fd150bc418ca6c70b0005;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_37fcf8236a8fd150bc418ca6c70b0005);
    assert(Py_REFCNT(frame_37fcf8236a8fd150bc418ca6c70b0005) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_3 = par_event;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[310]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[195];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[311]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_key == NULL);
        var_key = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_key);
        tmp_cmp_expr_left_1 = var_key;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[312]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_event);
        tmp_expression_value_6 = par_event;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[180]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[182]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_7 = par_event;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[183]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 421;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_37fcf8236a8fd150bc418ca6c70b0005->m_frame.f_lineno = 421;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[184]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_key);
        tmp_cmp_expr_left_2 = var_key;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[313]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "oooo";
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_event);
        tmp_expression_value_10 = par_event;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[180]);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[181]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_11 = par_event;
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[183]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 424;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_37fcf8236a8fd150bc418ca6c70b0005->m_frame.f_lineno = 424;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

            tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[184]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[314]);
        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = mod_consts[315];
        tmp_assign_source_2 = _PyDict_NewPresized( 8 );
        {
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_expression_value_19;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[316]);
            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[317];
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[318]);
            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[319];
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[320]);
            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[321];
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[322]);
            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[323];
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[324]);
            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[325];
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[326]);
            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[327];
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[328]);
            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[329];
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_key_to_command == NULL);
        var_key_to_command = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_assign_source_3;
        tmp_assign_source_3 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_key_to_command);
        tmp_dict_arg_value_1 = var_key_to_command;
        CHECK_OBJECT(var_key);
        tmp_key_value_1 = var_key;
        tmp_args_element_value_1 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_37fcf8236a8fd150bc418ca6c70b0005->m_frame.f_lineno = 441;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var_binding == NULL);
        var_binding = tmp_assign_source_4;
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

    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_5;
    }
    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_37fcf8236a8fd150bc418ca6c70b0005, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_37fcf8236a8fd150bc418ca6c70b0005, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 439;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_37fcf8236a8fd150bc418ca6c70b0005->m_frame) frame_37fcf8236a8fd150bc418ca6c70b0005->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_no_3:;
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
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = tmp_try_except_1__unhandled_indicator;
        tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        if (var_binding == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[330]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 445;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_1 = var_binding;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[331]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[331]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        if (var_binding == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[330]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 447;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = var_binding;
        CHECK_OBJECT(par_event);
        tmp_args_element_value_2 = par_event;
        frame_37fcf8236a8fd150bc418ca6c70b0005->m_frame.f_lineno = 447;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[332], tmp_args_element_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    branch_no_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_37fcf8236a8fd150bc418ca6c70b0005, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_37fcf8236a8fd150bc418ca6c70b0005->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_37fcf8236a8fd150bc418ca6c70b0005, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_37fcf8236a8fd150bc418ca6c70b0005,
        type_description_1,
        par_event,
        var_key_to_command,
        var_key,
        var_binding
    );


    // Release cached frame if used for exception.
    if (frame_37fcf8236a8fd150bc418ca6c70b0005 == cache_frame_37fcf8236a8fd150bc418ca6c70b0005) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_37fcf8236a8fd150bc418ca6c70b0005);
        cache_frame_37fcf8236a8fd150bc418ca6c70b0005 = NULL;
    }

    assertFrameObject(frame_37fcf8236a8fd150bc418ca6c70b0005);

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
    Py_XDECREF(var_key_to_command);
    var_key_to_command = NULL;
    CHECK_OBJECT(var_key);
    Py_DECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_binding);
    var_binding = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_key_to_command);
    var_key_to_command = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_binding);
    var_binding = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__2__start_selection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_buff = NULL;
    PyObject *var_original_position = NULL;
    struct Nuitka_FrameObject *frame_c1caf5953294861b72f5ed7bc4c9b8bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c1caf5953294861b72f5ed7bc4c9b8bd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c1caf5953294861b72f5ed7bc4c9b8bd)) {
        Py_XDECREF(cache_frame_c1caf5953294861b72f5ed7bc4c9b8bd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c1caf5953294861b72f5ed7bc4c9b8bd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c1caf5953294861b72f5ed7bc4c9b8bd = MAKE_FUNCTION_FRAME(tstate, codeobj_c1caf5953294861b72f5ed7bc4c9b8bd, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c1caf5953294861b72f5ed7bc4c9b8bd->m_type_description == NULL);
    frame_c1caf5953294861b72f5ed7bc4c9b8bd = cache_frame_c1caf5953294861b72f5ed7bc4c9b8bd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c1caf5953294861b72f5ed7bc4c9b8bd);
    assert(Py_REFCNT(frame_c1caf5953294861b72f5ed7bc4c9b8bd) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_buff == NULL);
        var_buff = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_buff);
        tmp_expression_value_2 = var_buff;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[210]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 465;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_buff);
        tmp_expression_value_3 = var_buff;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[218]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[219]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[219]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 466;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[220]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 466;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_c1caf5953294861b72f5ed7bc4c9b8bd->m_frame.f_lineno = 466;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[221]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_buff);
        tmp_expression_value_5 = var_buff;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[333]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_buff);
        tmp_expression_value_6 = var_buff;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[333]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_c1caf5953294861b72f5ed7bc4c9b8bd->m_frame.f_lineno = 471;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[334]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_buff);
        tmp_expression_value_7 = var_buff;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[201]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_original_position == NULL);
        var_original_position = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[273]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 475;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_event);
        tmp_args_element_value_1 = par_event;
        frame_c1caf5953294861b72f5ed7bc4c9b8bd->m_frame.f_lineno = 475;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_buff);
        tmp_expression_value_8 = var_buff;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[201]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_original_position);
        tmp_cmp_expr_right_2 = var_original_position;
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooc";
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(var_buff);
        tmp_called_instance_2 = var_buff;
        frame_c1caf5953294861b72f5ed7bc4c9b8bd->m_frame.f_lineno = 479;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[224]);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_3:;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c1caf5953294861b72f5ed7bc4c9b8bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c1caf5953294861b72f5ed7bc4c9b8bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c1caf5953294861b72f5ed7bc4c9b8bd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c1caf5953294861b72f5ed7bc4c9b8bd,
        type_description_1,
        par_event,
        var_buff,
        var_original_position,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_c1caf5953294861b72f5ed7bc4c9b8bd == cache_frame_c1caf5953294861b72f5ed7bc4c9b8bd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c1caf5953294861b72f5ed7bc4c9b8bd);
        cache_frame_c1caf5953294861b72f5ed7bc4c9b8bd = NULL;
    }

    assertFrameObject(frame_c1caf5953294861b72f5ed7bc4c9b8bd);

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
    CHECK_OBJECT(var_buff);
    Py_DECREF(var_buff);
    var_buff = NULL;
    Py_XDECREF(var_original_position);
    var_original_position = NULL;
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

    Py_XDECREF(var_buff);
    var_buff = NULL;
    Py_XDECREF(var_original_position);
    var_original_position = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__3__extend_selection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_buff = NULL;
    struct Nuitka_FrameObject *frame_3371ee90141cc5f57a199cc662fa6471;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3371ee90141cc5f57a199cc662fa6471 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3371ee90141cc5f57a199cc662fa6471)) {
        Py_XDECREF(cache_frame_3371ee90141cc5f57a199cc662fa6471);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3371ee90141cc5f57a199cc662fa6471 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3371ee90141cc5f57a199cc662fa6471 = MAKE_FUNCTION_FRAME(tstate, codeobj_3371ee90141cc5f57a199cc662fa6471, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3371ee90141cc5f57a199cc662fa6471->m_type_description == NULL);
    frame_3371ee90141cc5f57a199cc662fa6471 = cache_frame_3371ee90141cc5f57a199cc662fa6471;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3371ee90141cc5f57a199cc662fa6471);
    assert(Py_REFCNT(frame_3371ee90141cc5f57a199cc662fa6471) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[273]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 496;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_event);
        tmp_args_element_value_1 = par_event;
        frame_3371ee90141cc5f57a199cc662fa6471->m_frame.f_lineno = 496;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        assert(var_buff == NULL);
        var_buff = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_buff);
        tmp_expression_value_2 = var_buff;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[333]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_buff);
        tmp_expression_value_3 = var_buff;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[201]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buff);
        tmp_expression_value_5 = var_buff;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[333]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 500;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[335]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 500;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "ooc";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_buff);
        tmp_called_instance_1 = var_buff;
        frame_3371ee90141cc5f57a199cc662fa6471->m_frame.f_lineno = 502;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[224]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3371ee90141cc5f57a199cc662fa6471, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3371ee90141cc5f57a199cc662fa6471->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3371ee90141cc5f57a199cc662fa6471, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3371ee90141cc5f57a199cc662fa6471,
        type_description_1,
        par_event,
        var_buff,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_3371ee90141cc5f57a199cc662fa6471 == cache_frame_3371ee90141cc5f57a199cc662fa6471) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3371ee90141cc5f57a199cc662fa6471);
        cache_frame_3371ee90141cc5f57a199cc662fa6471 = NULL;
    }

    assertFrameObject(frame_3371ee90141cc5f57a199cc662fa6471);

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
    CHECK_OBJECT(var_buff);
    Py_DECREF(var_buff);
    var_buff = NULL;
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

    Py_XDECREF(var_buff);
    var_buff = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__4__replace_selection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_e792dbaf54ff81ca03a6e481567f66e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e792dbaf54ff81ca03a6e481567f66e5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e792dbaf54ff81ca03a6e481567f66e5)) {
        Py_XDECREF(cache_frame_e792dbaf54ff81ca03a6e481567f66e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e792dbaf54ff81ca03a6e481567f66e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e792dbaf54ff81ca03a6e481567f66e5 = MAKE_FUNCTION_FRAME(tstate, codeobj_e792dbaf54ff81ca03a6e481567f66e5, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e792dbaf54ff81ca03a6e481567f66e5->m_type_description == NULL);
    frame_e792dbaf54ff81ca03a6e481567f66e5 = cache_frame_e792dbaf54ff81ca03a6e481567f66e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e792dbaf54ff81ca03a6e481567f66e5);
    assert(Py_REFCNT(frame_e792dbaf54ff81ca03a6e481567f66e5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e792dbaf54ff81ca03a6e481567f66e5->m_frame.f_lineno = 509;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[225]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e792dbaf54ff81ca03a6e481567f66e5->m_frame.f_lineno = 510;
        tmp_called_instance_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[336]);

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_args_element_value_1 = par_event;
        frame_e792dbaf54ff81ca03a6e481567f66e5->m_frame.f_lineno = 510;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[332], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e792dbaf54ff81ca03a6e481567f66e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e792dbaf54ff81ca03a6e481567f66e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e792dbaf54ff81ca03a6e481567f66e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e792dbaf54ff81ca03a6e481567f66e5,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_e792dbaf54ff81ca03a6e481567f66e5 == cache_frame_e792dbaf54ff81ca03a6e481567f66e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e792dbaf54ff81ca03a6e481567f66e5);
        cache_frame_e792dbaf54ff81ca03a6e481567f66e5 = NULL;
    }

    assertFrameObject(frame_e792dbaf54ff81ca03a6e481567f66e5);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__5__newline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_f303bfa448c3a2a66649e9232188f7a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f303bfa448c3a2a66649e9232188f7a0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f303bfa448c3a2a66649e9232188f7a0)) {
        Py_XDECREF(cache_frame_f303bfa448c3a2a66649e9232188f7a0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f303bfa448c3a2a66649e9232188f7a0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f303bfa448c3a2a66649e9232188f7a0 = MAKE_FUNCTION_FRAME(tstate, codeobj_f303bfa448c3a2a66649e9232188f7a0, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f303bfa448c3a2a66649e9232188f7a0->m_type_description == NULL);
    frame_f303bfa448c3a2a66649e9232188f7a0 = cache_frame_f303bfa448c3a2a66649e9232188f7a0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f303bfa448c3a2a66649e9232188f7a0);
    assert(Py_REFCNT(frame_f303bfa448c3a2a66649e9232188f7a0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f303bfa448c3a2a66649e9232188f7a0->m_frame.f_lineno = 517;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[225]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_event);
        tmp_expression_value_3 = par_event;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[180]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[337]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[338]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[338]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 518;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f303bfa448c3a2a66649e9232188f7a0->m_frame.f_lineno = 518;
        tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 518;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 518;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = (tmp_res == 0) ? Py_True : Py_False;
        frame_f303bfa448c3a2a66649e9232188f7a0->m_frame.f_lineno = 518;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[339]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f303bfa448c3a2a66649e9232188f7a0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f303bfa448c3a2a66649e9232188f7a0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f303bfa448c3a2a66649e9232188f7a0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f303bfa448c3a2a66649e9232188f7a0,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_f303bfa448c3a2a66649e9232188f7a0 == cache_frame_f303bfa448c3a2a66649e9232188f7a0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f303bfa448c3a2a66649e9232188f7a0);
        cache_frame_f303bfa448c3a2a66649e9232188f7a0 = NULL;
    }

    assertFrameObject(frame_f303bfa448c3a2a66649e9232188f7a0);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__6__delete(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_0de59c26723fb97f87b13d82cb791dba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0de59c26723fb97f87b13d82cb791dba = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0de59c26723fb97f87b13d82cb791dba)) {
        Py_XDECREF(cache_frame_0de59c26723fb97f87b13d82cb791dba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0de59c26723fb97f87b13d82cb791dba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0de59c26723fb97f87b13d82cb791dba = MAKE_FUNCTION_FRAME(tstate, codeobj_0de59c26723fb97f87b13d82cb791dba, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0de59c26723fb97f87b13d82cb791dba->m_type_description == NULL);
    frame_0de59c26723fb97f87b13d82cb791dba = cache_frame_0de59c26723fb97f87b13d82cb791dba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0de59c26723fb97f87b13d82cb791dba);
    assert(Py_REFCNT(frame_0de59c26723fb97f87b13d82cb791dba) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0de59c26723fb97f87b13d82cb791dba->m_frame.f_lineno = 525;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[225]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
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
        exception_tb = MAKE_TRACEBACK(frame_0de59c26723fb97f87b13d82cb791dba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0de59c26723fb97f87b13d82cb791dba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0de59c26723fb97f87b13d82cb791dba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0de59c26723fb97f87b13d82cb791dba,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_0de59c26723fb97f87b13d82cb791dba == cache_frame_0de59c26723fb97f87b13d82cb791dba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0de59c26723fb97f87b13d82cb791dba);
        cache_frame_0de59c26723fb97f87b13d82cb791dba = NULL;
    }

    assertFrameObject(frame_0de59c26723fb97f87b13d82cb791dba);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__7__yank(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_buff = NULL;
    struct Nuitka_FrameObject *frame_1fedd58362c36905b40b71523db3a813;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1fedd58362c36905b40b71523db3a813 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1fedd58362c36905b40b71523db3a813)) {
        Py_XDECREF(cache_frame_1fedd58362c36905b40b71523db3a813);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1fedd58362c36905b40b71523db3a813 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1fedd58362c36905b40b71523db3a813 = MAKE_FUNCTION_FRAME(tstate, codeobj_1fedd58362c36905b40b71523db3a813, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1fedd58362c36905b40b71523db3a813->m_type_description == NULL);
    frame_1fedd58362c36905b40b71523db3a813 = cache_frame_1fedd58362c36905b40b71523db3a813;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1fedd58362c36905b40b71523db3a813);
    assert(Py_REFCNT(frame_1fedd58362c36905b40b71523db3a813) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_buff == NULL);
        var_buff = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_buff);
        tmp_expression_value_2 = var_buff;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[333]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 533;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_buff);
        tmp_called_instance_1 = var_buff;
        frame_1fedd58362c36905b40b71523db3a813->m_frame.f_lineno = 534;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[225]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1fedd58362c36905b40b71523db3a813->m_frame.f_lineno = 535;
        tmp_called_instance_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[25]);

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_args_element_value_1 = par_event;
        frame_1fedd58362c36905b40b71523db3a813->m_frame.f_lineno = 535;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[332], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1fedd58362c36905b40b71523db3a813, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1fedd58362c36905b40b71523db3a813->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1fedd58362c36905b40b71523db3a813, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1fedd58362c36905b40b71523db3a813,
        type_description_1,
        par_event,
        var_buff
    );


    // Release cached frame if used for exception.
    if (frame_1fedd58362c36905b40b71523db3a813 == cache_frame_1fedd58362c36905b40b71523db3a813) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1fedd58362c36905b40b71523db3a813);
        cache_frame_1fedd58362c36905b40b71523db3a813 = NULL;
    }

    assertFrameObject(frame_1fedd58362c36905b40b71523db3a813);

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
    CHECK_OBJECT(var_buff);
    Py_DECREF(var_buff);
    var_buff = NULL;
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

    Py_XDECREF(var_buff);
    var_buff = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__8__cancel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_key_press = NULL;
    struct Nuitka_FrameObject *frame_f9a28bc1b4f1e82fba3d9e86d6f87e07;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f9a28bc1b4f1e82fba3d9e86d6f87e07 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f9a28bc1b4f1e82fba3d9e86d6f87e07)) {
        Py_XDECREF(cache_frame_f9a28bc1b4f1e82fba3d9e86d6f87e07);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f9a28bc1b4f1e82fba3d9e86d6f87e07 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f9a28bc1b4f1e82fba3d9e86d6f87e07 = MAKE_FUNCTION_FRAME(tstate, codeobj_f9a28bc1b4f1e82fba3d9e86d6f87e07, module_prompt_toolkit$key_binding$bindings$emacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f9a28bc1b4f1e82fba3d9e86d6f87e07->m_type_description == NULL);
    frame_f9a28bc1b4f1e82fba3d9e86d6f87e07 = cache_frame_f9a28bc1b4f1e82fba3d9e86d6f87e07;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f9a28bc1b4f1e82fba3d9e86d6f87e07);
    assert(Py_REFCNT(frame_f9a28bc1b4f1e82fba3d9e86d6f87e07) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[180]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f9a28bc1b4f1e82fba3d9e86d6f87e07->m_frame.f_lineno = 552;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[224]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_3 = par_event;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[310]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[195];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_key_press == NULL);
        var_key_press = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_5 = par_event;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[192]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[340]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_key_press);
        tmp_tuple_element_1 = var_key_press;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[341]);
        frame_f9a28bc1b4f1e82fba3d9e86d6f87e07->m_frame.f_lineno = 555;
        tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f9a28bc1b4f1e82fba3d9e86d6f87e07, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f9a28bc1b4f1e82fba3d9e86d6f87e07->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f9a28bc1b4f1e82fba3d9e86d6f87e07, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f9a28bc1b4f1e82fba3d9e86d6f87e07,
        type_description_1,
        par_event,
        var_key_press
    );


    // Release cached frame if used for exception.
    if (frame_f9a28bc1b4f1e82fba3d9e86d6f87e07 == cache_frame_f9a28bc1b4f1e82fba3d9e86d6f87e07) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f9a28bc1b4f1e82fba3d9e86d6f87e07);
        cache_frame_f9a28bc1b4f1e82fba3d9e86d6f87e07 = NULL;
    }

    assertFrameObject(frame_f9a28bc1b4f1e82fba3d9e86d6f87e07);

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
    CHECK_OBJECT(var_key_press);
    Py_DECREF(var_key_press);
    var_key_press = NULL;
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

    Py_XDECREF(var_key_press);
    var_key_press = NULL;
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



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings,
        mod_consts[373],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4087cdc8c5f9cc377ec83ea731071b54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[179],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__10_is_returnable(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__10_is_returnable,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        mod_consts[99],
#endif
        codeobj_41d4b755992caba765f3baa252646069,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__11_character_search(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__11_character_search,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_6c312a4a8bbb23d1f1f1f711ebeb99b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__12__goto_char(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__12__goto_char,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_a9a514533e56ba2360e9795b996bfd7f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[110],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__13__goto_char_backwards(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__13__goto_char_backwards,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_8900067fe36cdfa65714f06cfbbc4514,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[114],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__14__prev_sentence(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_c64fd31345fbc17adf1d13a24b21ad07,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[118],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__15__end_of_sentence(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_7561183d1eb910f4680b3c734a8e1593,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[122],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__16__swap_characters(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_f079d9d07a36df5ee305427335facfa8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[126],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__17__insert_all_completions(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__17__insert_all_completions,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_e3e7281b4b9a37d9dc6043358587445d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[130],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__18__toggle_start_end(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__18__toggle_start_end,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_e731c537f0eb68afd9ceb730b9316cd6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[134],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__19__start_selection(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__19__start_selection,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_032208caabe41cc9d5aec26542d2347d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[138],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__1__esc(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[7],
#endif
        codeobj_d97d012058dcc15fde7fc7952b74288a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__20__cancel(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__20__cancel,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_0b7f5df186f595969f731e55c75da9c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[142],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__21__cancel_selection(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__21__cancel_selection,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_3d85267377fe62d033b889b60fb27539,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[145],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__22__cut(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__22__cut,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_438b5f33ad70432c0c9c4a39f34fbe23,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[150],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__23__copy(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__23__copy,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_50548cce560e2155aacf4f7270dff7f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[154],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__24__start_of_word(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__24__start_of_word,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_e8adf8b6b5f22e5049899278a4f55f34,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[158],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__25__start_next_word(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__25__start_next_word,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_bfd327b7e538eb4a7e7d2cdb62ae09f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[162],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__26__complete(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__26__complete,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_77e0a3a0e7e44148dc17152e5f0b3cbd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[166],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__27__indent(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__27__indent,
        mod_consts[171],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_f9e7a7fb98423c57aa4d43b4cf3b414b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[170],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__28__unindent(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__28__unindent,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_35615be4b33fdaec6ae64ebd77ca4cf7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[174],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[47],
#endif
        codeobj_4bd7eb079a1e5861767f97dee115ef65,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__3_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[47],
#endif
        codeobj_cb174381916fe3e67a5dfaf92a8c6a8c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__4__next(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__4__next,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_2cc95d8de8225c6438893680b09b059f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[75],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__5__prev(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__5__prev,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        mod_consts[81],
#endif
        codeobj_85d5e512c3f744df725ee7a5838c8168,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[79],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__6_handle_digit(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__6_handle_digit,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[85],
#endif
        codeobj_4c78c11c801cb397ffb7238731b2c300,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[83],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__6_handle_digit$$$function__1__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__6_handle_digit$$$function__1__,
        mod_consts[186],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_3086ccc58ee582fff6dd82e0e0b29c23,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__7__meta_dash(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__7__meta_dash,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        mod_consts[91],
#endif
        codeobj_4baebec551a02447d4e00e5ac986a857,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[89],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__8_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__8_lambda,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[47],
#endif
        codeobj_a42904e0e3249d35e8f12a1cc4a835c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__9__dash(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__9__dash,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_b7dc4e9e9e4aa32a2c2aea84c8996524,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[94],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__2_load_emacs_search_bindings(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__2_load_emacs_search_bindings,
        mod_consts[374],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_af9079d33d20ecd21c0ad45ec7e538ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__2_load_emacs_search_bindings$$$function__1__jump_next(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__2_load_emacs_search_bindings$$$function__1__jump_next,
        mod_consts[263],
#if PYTHON_VERSION >= 0x300
        mod_consts[264],
#endif
        codeobj_ec1374382ec8daf14241ea547ca5baee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[262],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__2_load_emacs_search_bindings$$$function__2__jump_prev(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__2_load_emacs_search_bindings$$$function__2__jump_prev,
        mod_consts[267],
#if PYTHON_VERSION >= 0x300
        mod_consts[268],
#endif
        codeobj_53df876690609b3220b229e5a23cd329,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[266],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings,
        mod_consts[375],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c739f1e05f5c428c8b7a05480ecd2474,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[309],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__1_unshift_move(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__1_unshift_move,
        mod_consts[273],
#if PYTHON_VERSION >= 0x300
        mod_consts[274],
#endif
        codeobj_37fcf8236a8fd150bc418ca6c70b0005,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[272],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__2__start_selection(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__2__start_selection,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        mod_consts[286],
#endif
        codeobj_c1caf5953294861b72f5ed7bc4c9b8bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[285],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__3__extend_selection(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__3__extend_selection,
        mod_consts[289],
#if PYTHON_VERSION >= 0x300
        mod_consts[290],
#endif
        codeobj_3371ee90141cc5f57a199cc662fa6471,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[288],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__4__replace_selection(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__4__replace_selection,
        mod_consts[292],
#if PYTHON_VERSION >= 0x300
        mod_consts[293],
#endif
        codeobj_e792dbaf54ff81ca03a6e481567f66e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[291],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__5__newline(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__5__newline,
        mod_consts[295],
#if PYTHON_VERSION >= 0x300
        mod_consts[296],
#endif
        codeobj_f303bfa448c3a2a66649e9232188f7a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[294],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__6__delete(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__6__delete,
        mod_consts[299],
#if PYTHON_VERSION >= 0x300
        mod_consts[300],
#endif
        codeobj_0de59c26723fb97f87b13d82cb791dba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[298],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__7__yank(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__7__yank,
        mod_consts[302],
#if PYTHON_VERSION >= 0x300
        mod_consts[303],
#endif
        codeobj_1fedd58362c36905b40b71523db3a813,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
        mod_consts[301],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__8__cancel(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__8__cancel,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[308],
#endif
        codeobj_f9a28bc1b4f1e82fba3d9e86d6f87e07,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$emacs,
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

static function_impl_code const function_table_prompt_toolkit$key_binding$bindings$emacs[] = {
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__4__next,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__5__prev,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__6_handle_digit,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__7__meta_dash,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__8_lambda,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__9__dash,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__10_is_returnable,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__11_character_search,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__12__goto_char,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__13__goto_char_backwards,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__17__insert_all_completions,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__18__toggle_start_end,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__19__start_selection,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__20__cancel,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__21__cancel_selection,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__22__cut,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__23__copy,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__24__start_of_word,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__25__start_next_word,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__26__complete,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__27__indent,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__28__unindent,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings$$$function__6_handle_digit$$$function__1__,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__2_load_emacs_search_bindings$$$function__1__jump_next,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__2_load_emacs_search_bindings$$$function__2__jump_prev,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__1_unshift_move,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__2__start_selection,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__3__extend_selection,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__4__replace_selection,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__5__newline,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__6__delete,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__7__yank,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings$$$function__8__cancel,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__2_load_emacs_search_bindings,
    impl_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_prompt_toolkit$key_binding$bindings$emacs);

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
        module_prompt_toolkit$key_binding$bindings$emacs,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_prompt_toolkit$key_binding$bindings$emacs,
        sizeof(function_table_prompt_toolkit$key_binding$bindings$emacs) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_prompt_toolkit$key_binding$bindings$emacs(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("prompt_toolkit$key_binding$bindings$emacs");

    // Store the module for future use.
    module_prompt_toolkit$key_binding$bindings$emacs = module;

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
        PRINT_STRING("prompt_toolkit$key_binding$bindings$emacs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("prompt_toolkit$key_binding$bindings$emacs: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initprompt_toolkit$key_binding$bindings$emacs\n");

    moduledict_prompt_toolkit$key_binding$bindings$emacs = MODULE_DICT(module_prompt_toolkit$key_binding$bindings$emacs);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_prompt_toolkit$key_binding$bindings$emacs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$key_binding$bindings$emacs,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[89]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$key_binding$bindings$emacs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$key_binding$bindings$emacs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$key_binding$bindings$emacs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_prompt_toolkit$key_binding$bindings$emacs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_prompt_toolkit$key_binding$bindings$emacs);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_b9395d1cbea5a52d8b21bb3f1c6f305b;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[343], tmp_assign_source_2);
    }
    frame_b9395d1cbea5a52d8b21bb3f1c6f305b = MAKE_MODULE_FRAME(codeobj_b9395d1cbea5a52d8b21bb3f1c6f305b, module_prompt_toolkit$key_binding$bindings$emacs);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b9395d1cbea5a52d8b21bb3f1c6f305b);
    assert(Py_REFCNT(frame_b9395d1cbea5a52d8b21bb3f1c6f305b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[344]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[344]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[345], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[344]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[344]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[346], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[347], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[348]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[349];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[350];
        tmp_level_value_1 = mod_consts[195];
        frame_b9395d1cbea5a52d8b21bb3f1c6f305b->m_frame.f_lineno = 4;
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
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[191],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[191]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[351];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[352];
        tmp_level_value_2 = mod_consts[195];
        frame_b9395d1cbea5a52d8b21bb3f1c6f305b->m_frame.f_lineno = 5;
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
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[353],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[353]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[353], tmp_assign_source_7);
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
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[239],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[239]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_8);
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
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[241],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[241]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_9);
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[354];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[355];
        tmp_level_value_3 = mod_consts[195];
        frame_b9395d1cbea5a52d8b21bb3f1c6f305b->m_frame.f_lineno = 6;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[203],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[203]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[356];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[357];
        tmp_level_value_4 = mod_consts[195];
        frame_b9395d1cbea5a52d8b21bb3f1c6f305b->m_frame.f_lineno = 7;
        tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[92],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[92]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[2],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[2]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[178],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[178]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_14);
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
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[87],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[87]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[52],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[52]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[338],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[338]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[102],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[102]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[257],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[257]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[287],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[287]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[287], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[258],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[258]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_21);
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
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[358];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[359];
        tmp_level_value_5 = mod_consts[195];
        frame_b9395d1cbea5a52d8b21bb3f1c6f305b->m_frame.f_lineno = 19;
        tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[331],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[331]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[331], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[360];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[361];
        tmp_level_value_6 = mod_consts[195];
        frame_b9395d1cbea5a52d8b21bb3f1c6f305b->m_frame.f_lineno = 20;
        tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[362],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[362]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[363];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[364];
        tmp_level_value_7 = mod_consts[195];
        frame_b9395d1cbea5a52d8b21bb3f1c6f305b->m_frame.f_lineno = 21;
        tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_18,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[108],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[108]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[365];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[366];
        tmp_level_value_8 = mod_consts[195];
        frame_b9395d1cbea5a52d8b21bb3f1c6f305b->m_frame.f_lineno = 22;
        tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_19,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[219],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[219]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[367];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[368];
        tmp_level_value_9 = mod_consts[369];
        frame_b9395d1cbea5a52d8b21bb3f1c6f305b->m_frame.f_lineno = 24;
        tmp_assign_source_26 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_20 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_20,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[177],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[177]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_21 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_21,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[0],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts[0]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_22 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_22,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[370],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts[370]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[370], tmp_assign_source_29);
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
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[371];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[372];
        tmp_level_value_10 = mod_consts[240];
        frame_b9395d1cbea5a52d8b21bb3f1c6f305b->m_frame.f_lineno = 25;
        tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_23,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$emacs,
                mod_consts[9],
                mod_consts[195]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts[9]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_LIST3(mod_consts[373],mod_consts[374],mod_consts[375]);
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[376], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[362]);

        if (unlikely(tmp_assign_source_32 == NULL)) {
            tmp_assign_source_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[362]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[377], tmp_assign_source_32);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b9395d1cbea5a52d8b21bb3f1c6f305b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b9395d1cbea5a52d8b21bb3f1c6f305b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b9395d1cbea5a52d8b21bb3f1c6f305b, exception_lineno);
    }



    assertFrameObject(frame_b9395d1cbea5a52d8b21bb3f1c6f305b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[378]);


        tmp_assign_source_33 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__1_load_emacs_bindings(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[373], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_annotations_2;
        tmp_annotations_2 = DICT_COPY(mod_consts[378]);


        tmp_assign_source_34 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__2_load_emacs_search_bindings(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[374], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_annotations_3;
        tmp_annotations_3 = DICT_COPY(mod_consts[378]);


        tmp_assign_source_35 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$emacs$$$function__3_load_emacs_shift_selection_bindings(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)mod_consts[375], tmp_assign_source_35);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("prompt_toolkit$key_binding$bindings$emacs", false);

    Py_INCREF(module_prompt_toolkit$key_binding$bindings$emacs);
    return module_prompt_toolkit$key_binding$bindings$emacs;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$emacs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("prompt_toolkit$key_binding$bindings$emacs", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
