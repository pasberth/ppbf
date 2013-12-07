#if PPBF_SOURCE_LENGTH != BOOST_PP_SLOT(2) && BOOST_PP_SLOT(2) < PPBF_EVAL_SHIFT() // start eval
#
#define PPBF_EVAL BOOST_PP_SEQ_ELEM(BOOST_PP_SLOT(2), PPBF_SOURCE)
#
#if PPBF_EVAL == 1  // ip
#
#if BOOST_PP_SLOT(1) < 5 // start operator eval
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
#
BOOST_PP_CAT(PPBF_ASCII_, BOOST_PP_SLOT(BOOST_PP_SLOT(1)))
#
#elif PPBF_EVAL == 6
#
#define BOOST_PP_VALUE BOOST_PP_SLOT(2)
#include BOOST_PP_ASSIGN_SLOT(5)
#
#elif PPBF_EVAL == 7
#
#if BOOST_PP_SLOT(4) != 0
#
#define BOOST_PP_VALUE BOOST_PP_SLOT(5)
#include BOOST_PP_ASSIGN_SLOT(2)
#
#endif
#
#endif // end operator eval
#
#undef PPBF_EVAL
#
#define BOOST_PP_VALUE BOOST_PP_SLOT(2) + 1 
#include BOOST_PP_ASSIGN_SLOT(2)
#
#include __FILE__
#
#endif  // end eval
