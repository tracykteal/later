// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/later.h"
#include <Rcpp.h>

using namespace Rcpp;

// testCallbackOrdering
void testCallbackOrdering();
RcppExport SEXP _later_testCallbackOrdering() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    testCallbackOrdering();
    return R_NilValue;
END_RCPP
}
// log_level
std::string log_level(std::string level);
RcppExport SEXP _later_log_level(SEXP levelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type level(levelSEXP);
    rcpp_result_gen = Rcpp::wrap(log_level(level));
    return rcpp_result_gen;
END_RCPP
}
// getGlobalRegistryXptr
SEXP getGlobalRegistryXptr();
RcppExport SEXP _later_getGlobalRegistryXptr() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(getGlobalRegistryXptr());
    return rcpp_result_gen;
END_RCPP
}
// setCurrentRegistryXptr
void setCurrentRegistryXptr(SEXP registry_xptr);
RcppExport SEXP _later_setCurrentRegistryXptr(SEXP registry_xptrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type registry_xptr(registry_xptrSEXP);
    setCurrentRegistryXptr(registry_xptr);
    return R_NilValue;
END_RCPP
}
// getCurrentRegistryXptr
SEXP getCurrentRegistryXptr();
RcppExport SEXP _later_getCurrentRegistryXptr() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(getCurrentRegistryXptr());
    return rcpp_result_gen;
END_RCPP
}
// deleteCallbackRegistry
bool deleteCallbackRegistry(SEXP registry_xptr);
RcppExport SEXP _later_deleteCallbackRegistry(SEXP registry_xptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type registry_xptr(registry_xptrSEXP);
    rcpp_result_gen = Rcpp::wrap(deleteCallbackRegistry(registry_xptr));
    return rcpp_result_gen;
END_RCPP
}
// createCallbackRegistry
SEXP createCallbackRegistry(SEXP parent_loop_xptr);
RcppExport SEXP _later_createCallbackRegistry(SEXP parent_loop_xptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type parent_loop_xptr(parent_loop_xptrSEXP);
    rcpp_result_gen = Rcpp::wrap(createCallbackRegistry(parent_loop_xptr));
    return rcpp_result_gen;
END_RCPP
}
// existsCallbackRegistry
bool existsCallbackRegistry(SEXP registry_xptr);
RcppExport SEXP _later_existsCallbackRegistry(SEXP registry_xptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type registry_xptr(registry_xptrSEXP);
    rcpp_result_gen = Rcpp::wrap(existsCallbackRegistry(registry_xptr));
    return rcpp_result_gen;
END_RCPP
}
// list_queue_
Rcpp::List list_queue_(SEXP registry_xptr);
RcppExport SEXP _later_list_queue_(SEXP registry_xptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type registry_xptr(registry_xptrSEXP);
    rcpp_result_gen = Rcpp::wrap(list_queue_(registry_xptr));
    return rcpp_result_gen;
END_RCPP
}
// execCallbacks
bool execCallbacks(double timeoutSecs, bool runAll, SEXP registry_xptr);
RcppExport SEXP _later_execCallbacks(SEXP timeoutSecsSEXP, SEXP runAllSEXP, SEXP registry_xptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type timeoutSecs(timeoutSecsSEXP);
    Rcpp::traits::input_parameter< bool >::type runAll(runAllSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry_xptr(registry_xptrSEXP);
    rcpp_result_gen = Rcpp::wrap(execCallbacks(timeoutSecs, runAll, registry_xptr));
    return rcpp_result_gen;
END_RCPP
}
// idle
bool idle(SEXP registry_xptr);
RcppExport SEXP _later_idle(SEXP registry_xptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type registry_xptr(registry_xptrSEXP);
    rcpp_result_gen = Rcpp::wrap(idle(registry_xptr));
    return rcpp_result_gen;
END_RCPP
}
// ensureInitialized
void ensureInitialized();
RcppExport SEXP _later_ensureInitialized() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    ensureInitialized();
    return R_NilValue;
END_RCPP
}
// execLater
std::string execLater(Rcpp::Function callback, double delaySecs, SEXP registry_xptr);
RcppExport SEXP _later_execLater(SEXP callbackSEXP, SEXP delaySecsSEXP, SEXP registry_xptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Function >::type callback(callbackSEXP);
    Rcpp::traits::input_parameter< double >::type delaySecs(delaySecsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry_xptr(registry_xptrSEXP);
    rcpp_result_gen = Rcpp::wrap(execLater(callback, delaySecs, registry_xptr));
    return rcpp_result_gen;
END_RCPP
}
// cancel
bool cancel(std::string callback_id_s, SEXP registry_xptr);
RcppExport SEXP _later_cancel(SEXP callback_id_sSEXP, SEXP registry_xptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type callback_id_s(callback_id_sSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry_xptr(registry_xptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cancel(callback_id_s, registry_xptr));
    return rcpp_result_gen;
END_RCPP
}
// nextOpSecs
double nextOpSecs(SEXP registry_xptr);
RcppExport SEXP _later_nextOpSecs(SEXP registry_xptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type registry_xptr(registry_xptrSEXP);
    rcpp_result_gen = Rcpp::wrap(nextOpSecs(registry_xptr));
    return rcpp_result_gen;
END_RCPP
}
