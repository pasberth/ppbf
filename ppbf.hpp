#// PreProcessorBrainFuck
#
#ifndef PPBF_INCLUDE
#define PPBF_INCLUDE
#
#include <boost/preprocessor.hpp>
#include "ppbf_ascii.hpp"
#
#endif  // PPBF_INCLUDE
#
#ifndef PPBF_OPERATOR
#define PPBF_OPERATOR
#
#define ip (1)
#define dp (2)
#define iv (3)
#define dv (4)
#define sh (5)
#define la (6)
#define gt (7)
#
#endif  // ifndef PPBF_OPERATOR
#
#ifndef PPBF_SOURCE
#// user code
#include "ppbf_source.hpp"
#
#endif  // ifndef PPBF_SOURCE
#
#ifndef PPBF_INITIALIZE
#define PPBF_INITIALIZE
#
#define PPBF_SOURCE_LENGTH BOOST_PP_SEQ_SIZE(PPBF_SOURCE)
#
#define BOOST_PP_VALUE 3
#include BOOST_PP_ASSIGN_SLOT(1)  // ptr_pos
#define BOOST_PP_VALUE 0
#include BOOST_PP_ASSIGN_SLOT(2)  // code_pos
#define BOOST_PP_VALUE 0
#include BOOST_PP_ASSIGN_SLOT(3)  // ptr1
#define BOOST_PP_VALUE 0
#include BOOST_PP_ASSIGN_SLOT(4)  // ptr2
#define BOOST_PP_VALUE 0
#include BOOST_PP_ASSIGN_SLOT(5)  // ptr3
#
#endif  // ifndef PPBF_INITIALIZE
#
#define PPBF_EVAL_SHIFT() 32
#include "ppbf_eval.hpp"
#undef PPBF_EVAL_SHIFT
#
#define PPBF_EVAL_SHIFT() 64
#include "ppbf_eval.hpp"
#undef PPBF_EVAL_SHIFT
#
#define PPBF_EVAL_SHIFT() 96
#include "ppbf_eval.hpp"
#undef PPBF_EVAL_SHIFT
#
#define PPBF_EVAL_SHIFT() 128
#include "ppbf_eval.hpp"
#undef PPBF_EVAL_SHIFT
#
#define PPBF_EVAL_SHIFT() 160
#include "ppbf_eval.hpp"
#undef PPBF_EVAL_SHIFT
#
#define PPBF_EVAL_SHIFT() 192
#include "ppbf_eval.hpp"
#undef PPBF_EVAL_SHIFT
#
#define PPBF_EVAL_SHIFT() 224
#include "ppbf_eval.hpp"
#undef PPBF_EVAL_SHIFT
#
#define PPBF_EVAL_SHIFT() 256
#include "ppbf_eval.hpp"
#undef PPBF_EVAL_SHIFT
#
#// End
