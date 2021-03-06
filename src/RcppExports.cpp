// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// ProbsV_Cpp
arma::mat ProbsV_Cpp(arma::rowvec v_S_t, int& n_I, int& n_S, NumericVector& t_P);
RcppExport SEXP _calibR_ProbsV_Cpp(SEXP v_S_tSEXP, SEXP n_ISEXP, SEXP n_SSEXP, SEXP t_PSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type v_S_t(v_S_tSEXP);
    Rcpp::traits::input_parameter< int& >::type n_I(n_ISEXP);
    Rcpp::traits::input_parameter< int& >::type n_S(n_SSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type t_P(t_PSEXP);
    rcpp_result_gen = Rcpp::wrap(ProbsV_Cpp(v_S_t, n_I, n_S, t_P));
    return rcpp_result_gen;
END_RCPP
}
// SampleV_Cpp
arma::mat SampleV_Cpp(arma::mat m_P_t, int& n_I, int& n_S, int m);
RcppExport SEXP _calibR_SampleV_Cpp(SEXP m_P_tSEXP, SEXP n_ISEXP, SEXP n_SSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type m_P_t(m_P_tSEXP);
    Rcpp::traits::input_parameter< int& >::type n_I(n_ISEXP);
    Rcpp::traits::input_parameter< int& >::type n_S(n_SSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(SampleV_Cpp(m_P_t, n_I, n_S, m));
    return rcpp_result_gen;
END_RCPP
}
// CostsV_Cpp
arma::colvec CostsV_Cpp(arma::colvec v_S_t, int& n_I, int& n_S, NumericVector& v_Costs, bool b_Trt);
RcppExport SEXP _calibR_CostsV_Cpp(SEXP v_S_tSEXP, SEXP n_ISEXP, SEXP n_SSEXP, SEXP v_CostsSEXP, SEXP b_TrtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type v_S_t(v_S_tSEXP);
    Rcpp::traits::input_parameter< int& >::type n_I(n_ISEXP);
    Rcpp::traits::input_parameter< int& >::type n_S(n_SSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type v_Costs(v_CostsSEXP);
    Rcpp::traits::input_parameter< bool >::type b_Trt(b_TrtSEXP);
    rcpp_result_gen = Rcpp::wrap(CostsV_Cpp(v_S_t, n_I, n_S, v_Costs, b_Trt));
    return rcpp_result_gen;
END_RCPP
}
// EffsV_Cpp
arma::colvec EffsV_Cpp(arma::colvec v_S_t, int& n_I, int& n_S, NumericVector& v_Utilities, bool b_Trt, int cl);
RcppExport SEXP _calibR_EffsV_Cpp(SEXP v_S_tSEXP, SEXP n_ISEXP, SEXP n_SSEXP, SEXP v_UtilitiesSEXP, SEXP b_TrtSEXP, SEXP clSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type v_S_t(v_S_tSEXP);
    Rcpp::traits::input_parameter< int& >::type n_I(n_ISEXP);
    Rcpp::traits::input_parameter< int& >::type n_S(n_SSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type v_Utilities(v_UtilitiesSEXP);
    Rcpp::traits::input_parameter< bool >::type b_Trt(b_TrtSEXP);
    Rcpp::traits::input_parameter< int >::type cl(clSEXP);
    rcpp_result_gen = Rcpp::wrap(EffsV_Cpp(v_S_t, n_I, n_S, v_Utilities, b_Trt, cl));
    return rcpp_result_gen;
END_RCPP
}
// MicroSimV_Cpp
List MicroSimV_Cpp(arma::colvec& v_S_t, NumericVector t_P, NumericVector v_C, NumericVector v_U, int n_I, int n_S, int n_T, int n_Cl, double d_dC, double d_dE, bool b_Trt, int n_Seed);
RcppExport SEXP _calibR_MicroSimV_Cpp(SEXP v_S_tSEXP, SEXP t_PSEXP, SEXP v_CSEXP, SEXP v_USEXP, SEXP n_ISEXP, SEXP n_SSEXP, SEXP n_TSEXP, SEXP n_ClSEXP, SEXP d_dCSEXP, SEXP d_dESEXP, SEXP b_TrtSEXP, SEXP n_SeedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec& >::type v_S_t(v_S_tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t_P(t_PSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v_C(v_CSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v_U(v_USEXP);
    Rcpp::traits::input_parameter< int >::type n_I(n_ISEXP);
    Rcpp::traits::input_parameter< int >::type n_S(n_SSEXP);
    Rcpp::traits::input_parameter< int >::type n_T(n_TSEXP);
    Rcpp::traits::input_parameter< int >::type n_Cl(n_ClSEXP);
    Rcpp::traits::input_parameter< double >::type d_dC(d_dCSEXP);
    Rcpp::traits::input_parameter< double >::type d_dE(d_dESEXP);
    Rcpp::traits::input_parameter< bool >::type b_Trt(b_TrtSEXP);
    Rcpp::traits::input_parameter< int >::type n_Seed(n_SeedSEXP);
    rcpp_result_gen = Rcpp::wrap(MicroSimV_Cpp(v_S_t, t_P, v_C, v_U, n_I, n_S, n_T, n_Cl, d_dC, d_dE, b_Trt, n_Seed));
    return rcpp_result_gen;
END_RCPP
}
// SickSickerMicroSim_Cpp
List SickSickerMicroSim_Cpp(arma::colvec& v_S_t, NumericVector t_P, NumericVector v_C, NumericVector v_U, int n_I, int n_S, int n_T, int n_Cl, double d_dC, double d_dE, int n_Seed, bool b_Trt);
RcppExport SEXP _calibR_SickSickerMicroSim_Cpp(SEXP v_S_tSEXP, SEXP t_PSEXP, SEXP v_CSEXP, SEXP v_USEXP, SEXP n_ISEXP, SEXP n_SSEXP, SEXP n_TSEXP, SEXP n_ClSEXP, SEXP d_dCSEXP, SEXP d_dESEXP, SEXP n_SeedSEXP, SEXP b_TrtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec& >::type v_S_t(v_S_tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t_P(t_PSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v_C(v_CSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v_U(v_USEXP);
    Rcpp::traits::input_parameter< int >::type n_I(n_ISEXP);
    Rcpp::traits::input_parameter< int >::type n_S(n_SSEXP);
    Rcpp::traits::input_parameter< int >::type n_T(n_TSEXP);
    Rcpp::traits::input_parameter< int >::type n_Cl(n_ClSEXP);
    Rcpp::traits::input_parameter< double >::type d_dC(d_dCSEXP);
    Rcpp::traits::input_parameter< double >::type d_dE(d_dESEXP);
    Rcpp::traits::input_parameter< int >::type n_Seed(n_SeedSEXP);
    Rcpp::traits::input_parameter< bool >::type b_Trt(b_TrtSEXP);
    rcpp_result_gen = Rcpp::wrap(SickSickerMicroSim_Cpp(v_S_t, t_P, v_C, v_U, n_I, n_S, n_T, n_Cl, d_dC, d_dE, n_Seed, b_Trt));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_calibR_ProbsV_Cpp", (DL_FUNC) &_calibR_ProbsV_Cpp, 4},
    {"_calibR_SampleV_Cpp", (DL_FUNC) &_calibR_SampleV_Cpp, 4},
    {"_calibR_CostsV_Cpp", (DL_FUNC) &_calibR_CostsV_Cpp, 5},
    {"_calibR_EffsV_Cpp", (DL_FUNC) &_calibR_EffsV_Cpp, 6},
    {"_calibR_MicroSimV_Cpp", (DL_FUNC) &_calibR_MicroSimV_Cpp, 12},
    {"_calibR_SickSickerMicroSim_Cpp", (DL_FUNC) &_calibR_SickSickerMicroSim_Cpp, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_calibR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
