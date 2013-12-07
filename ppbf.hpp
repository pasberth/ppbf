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
#if PPBF_SOURCE_LENGTH != BOOST_PP_SLOT(2)  // start eval
#
#define PPBF_EVAL BOOST_PP_SEQ_ELEM(BOOST_PP_SLOT(2), PPBF_SOURCE)
#
#if PPBF_EVAL == 1  // ip
#
#if BOOST_PP_SLOT(1) < 5
#define BOOST_PP_VALUE BOOST_PP_SLOT(1) + 1
#include BOOST_PP_ASSIGN_SLOT(1)
#endif
#
#elif PPBF_EVAL == 2  // dp
#
#if BOOST_PP_SLOT(1) > 3
#define BOOST_PP_VALUE BOOST_PP_SLOT(1) - 1
#include BOOST_PP_ASSIGN_SLOT(1)
#endif
#
#elif PPBF_EVAL == 3  // iv
#
#define BOOST_PP_VALUE BOOST_PP_SLOT(BOOST_PP_SLOT(1)) + 1
#include BOOST_PP_ASSIGN_SLOT(BOOST_PP_SLOT(1))
#
#elif PPBF_EVAL == 4  // dp
#
#define BOOST_PP_VALUE BOOST_PP_SLOT(BOOST_PP_SLOT(1)) - 1
#include BOOST_PP_ASSIGN_SLOT(BOOST_PP_SLOT(1))
#
#elif PPBF_EVAL == 5
BOOST_PP_CAT(PPBF_ASCII_, BOOST_PP_SLOT(BOOST_PP_SLOT(1)))
#endif
#
#undef PPBF_EVAL
#
#define BOOST_PP_VALUE BOOST_PP_SLOT(2) + 1
#include BOOST_PP_ASSIGN_SLOT(2)
#
#include __FILE__
#
#endif  // end eval
