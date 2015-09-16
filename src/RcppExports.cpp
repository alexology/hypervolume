// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// kdtree_build_intl
SEXP kdtree_build_intl(SEXP d, SEXP nr, SEXP nc);
RcppExport SEXP hypervolume_kdtree_build_intl(SEXP dSEXP, SEXP nrSEXP, SEXP ncSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type d(dSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nc(ncSEXP);
    __result = Rcpp::wrap(kdtree_build_intl(d, nr, nc));
    return __result;
END_RCPP
}
// kdtree_ball_query_multiple
SEXP kdtree_ball_query_multiple(SEXP tr, SEXP ptlist, SEXP nr, SEXP nc, SEXP r, SEXP verb);
RcppExport SEXP hypervolume_kdtree_ball_query_multiple(SEXP trSEXP, SEXP ptlistSEXP, SEXP nrSEXP, SEXP ncSEXP, SEXP rSEXP, SEXP verbSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tr(trSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptlist(ptlistSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< SEXP >::type r(rSEXP);
    Rcpp::traits::input_parameter< SEXP >::type verb(verbSEXP);
    __result = Rcpp::wrap(kdtree_ball_query_multiple(tr, ptlist, nr, nc, r, verb));
    return __result;
END_RCPP
}
// kdtree_range_query_multiple
SEXP kdtree_range_query_multiple(SEXP tr, SEXP pminlist, SEXP pmaxlist, SEXP nr, SEXP nc, SEXP verb);
RcppExport SEXP hypervolume_kdtree_range_query_multiple(SEXP trSEXP, SEXP pminlistSEXP, SEXP pmaxlistSEXP, SEXP nrSEXP, SEXP ncSEXP, SEXP verbSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tr(trSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pminlist(pminlistSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pmaxlist(pmaxlistSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< SEXP >::type verb(verbSEXP);
    __result = Rcpp::wrap(kdtree_range_query_multiple(tr, pminlist, pmaxlist, nr, nc, verb));
    return __result;
END_RCPP
}
// fastPdist2
NumericMatrix fastPdist2(NumericMatrix Ar, NumericMatrix Br);
RcppExport SEXP hypervolume_fastPdist2(SEXP ArSEXP, SEXP BrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type Ar(ArSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Br(BrSEXP);
    __result = Rcpp::wrap(fastPdist2(Ar, Br));
    return __result;
END_RCPP
}