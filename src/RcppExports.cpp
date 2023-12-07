// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// studentized_bootstrap_ci_C
NumericVector studentized_bootstrap_ci_C(NumericVector X, int B);
RcppExport SEXP _SA23204159_studentized_bootstrap_ci_C(SEXP XSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(studentized_bootstrap_ci_C(X, B));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SA23204159_studentized_bootstrap_ci_C", (DL_FUNC) &_SA23204159_studentized_bootstrap_ci_C, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_SA23204159(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}