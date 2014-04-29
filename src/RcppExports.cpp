// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cppReadFile
std::string cppReadFile(std::string xmlFile);
RcppExport SEXP openxlsx_cppReadFile(SEXP xmlFileSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type xmlFile(xmlFileSEXP );
        std::string __result = cppReadFile(xmlFile);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getVals
SEXP getVals(CharacterVector x);
RcppExport SEXP openxlsx_getVals(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP );
        SEXP __result = getVals(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getNodes
SEXP getNodes(std::string xml, std::string tagIn);
RcppExport SEXP openxlsx_getNodes(SEXP xmlSEXP, SEXP tagInSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type xml(xmlSEXP );
        Rcpp::traits::input_parameter< std::string >::type tagIn(tagInSEXP );
        SEXP __result = getNodes(xml, tagIn);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getChildlessNode
SEXP getChildlessNode(std::string xml, std::string tag);
RcppExport SEXP openxlsx_getChildlessNode(SEXP xmlSEXP, SEXP tagSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type xml(xmlSEXP );
        Rcpp::traits::input_parameter< std::string >::type tag(tagSEXP );
        SEXP __result = getChildlessNode(xml, tag);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getAttr
SEXP getAttr(CharacterVector x, std::string tag);
RcppExport SEXP openxlsx_getAttr(SEXP xSEXP, SEXP tagSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< std::string >::type tag(tagSEXP );
        SEXP __result = getAttr(x, tag);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// childrenCounter
SEXP childrenCounter(CharacterVector x);
RcppExport SEXP openxlsx_childrenCounter(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP );
        SEXP __result = childrenCounter(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getCellStyles
SEXP getCellStyles(CharacterVector x);
RcppExport SEXP openxlsx_getCellStyles(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP );
        SEXP __result = getCellStyles(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getCellTypes
SEXP getCellTypes(CharacterVector x);
RcppExport SEXP openxlsx_getCellTypes(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP );
        SEXP __result = getCellTypes(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getCells
SEXP getCells(CharacterVector x);
RcppExport SEXP openxlsx_getCells(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP );
        SEXP __result = getCells(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getFunction
SEXP getFunction(CharacterVector x);
RcppExport SEXP openxlsx_getFunction(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP );
        SEXP __result = getFunction(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getRefs
SEXP getRefs(CharacterVector x, int startRow);
RcppExport SEXP openxlsx_getRefs(SEXP xSEXP, SEXP startRowSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< int >::type startRow(startRowSEXP );
        SEXP __result = getRefs(x, startRow);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getRefsVals
SEXP getRefsVals(CharacterVector x, int startRow);
RcppExport SEXP openxlsx_getRefsVals(SEXP xSEXP, SEXP startRowSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< int >::type startRow(startRowSEXP );
        SEXP __result = getRefsVals(x, startRow);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getSharedStrings
CharacterVector getSharedStrings(CharacterVector x);
RcppExport SEXP openxlsx_getSharedStrings(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP );
        CharacterVector __result = getSharedStrings(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getNumValues
List getNumValues(CharacterVector inFile, int n, std::string tagIn);
RcppExport SEXP openxlsx_getNumValues(SEXP inFileSEXP, SEXP nSEXP, SEXP tagInSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type inFile(inFileSEXP );
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        Rcpp::traits::input_parameter< std::string >::type tagIn(tagInSEXP );
        List __result = getNumValues(inFile, n, tagIn);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// RcppConvertFromExcelRef
IntegerVector RcppConvertFromExcelRef(CharacterVector x);
RcppExport SEXP openxlsx_RcppConvertFromExcelRef(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP );
        IntegerVector __result = RcppConvertFromExcelRef(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// writeFile
SEXP writeFile(std::string parent, std::string xmlText, std::string parentEnd, std::string R_fileName);
RcppExport SEXP openxlsx_writeFile(SEXP parentSEXP, SEXP xmlTextSEXP, SEXP parentEndSEXP, SEXP R_fileNameSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type parent(parentSEXP );
        Rcpp::traits::input_parameter< std::string >::type xmlText(xmlTextSEXP );
        Rcpp::traits::input_parameter< std::string >::type parentEnd(parentEndSEXP );
        Rcpp::traits::input_parameter< std::string >::type R_fileName(R_fileNameSEXP );
        SEXP __result = writeFile(parent, xmlText, parentEnd, R_fileName);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// buildCellList
List buildCellList(CharacterVector r, CharacterVector t, CharacterVector v);
RcppExport SEXP openxlsx_buildCellList(SEXP rSEXP, SEXP tSEXP, SEXP vSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type r(rSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type t(tSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type v(vSEXP );
        List __result = buildCellList(r, t, v);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// buildLoadCellList
SEXP buildLoadCellList(CharacterVector r, CharacterVector t, CharacterVector v, CharacterVector f);
RcppExport SEXP openxlsx_buildLoadCellList(SEXP rSEXP, SEXP tSEXP, SEXP vSEXP, SEXP fSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type r(rSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type t(tSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type v(vSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type f(fSEXP );
        SEXP __result = buildLoadCellList(r, t, v, f);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// constructCellData
SEXP constructCellData(IntegerVector cols, std::vector<std::string> LETTERS, std::vector<std::string> rows, CharacterVector t, CharacterVector v);
RcppExport SEXP openxlsx_constructCellData(SEXP colsSEXP, SEXP LETTERSSEXP, SEXP rowsSEXP, SEXP tSEXP, SEXP vSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type cols(colsSEXP );
        Rcpp::traits::input_parameter< std::vector<std::string> >::type LETTERS(LETTERSSEXP );
        Rcpp::traits::input_parameter< std::vector<std::string> >::type rows(rowsSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type t(tSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type v(vSEXP );
        SEXP __result = constructCellData(cols, LETTERS, rows, t, v);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// buildCellList212121
SEXP buildCellList212121(CharacterVector r, CharacterVector t, CharacterVector v, CharacterVector s);
RcppExport SEXP openxlsx_buildCellList212121(SEXP rSEXP, SEXP tSEXP, SEXP vSEXP, SEXP sSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type r(rSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type t(tSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type v(vSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type s(sSEXP );
        SEXP __result = buildCellList212121(r, t, v, s);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// convert2ExcelRef
SEXP convert2ExcelRef(IntegerVector cols, std::vector<std::string> LETTERS);
RcppExport SEXP openxlsx_convert2ExcelRef(SEXP colsSEXP, SEXP LETTERSSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type cols(colsSEXP );
        Rcpp::traits::input_parameter< std::vector<std::string> >::type LETTERS(LETTERSSEXP );
        SEXP __result = convert2ExcelRef(cols, LETTERS);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ExcelConvertExpand
SEXP ExcelConvertExpand(IntegerVector cols, std::vector<std::string> LETTERS, std::vector<std::string> rows);
RcppExport SEXP openxlsx_ExcelConvertExpand(SEXP colsSEXP, SEXP LETTERSSEXP, SEXP rowsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type cols(colsSEXP );
        Rcpp::traits::input_parameter< std::vector<std::string> >::type LETTERS(LETTERSSEXP );
        Rcpp::traits::input_parameter< std::vector<std::string> >::type rows(rowsSEXP );
        SEXP __result = ExcelConvertExpand(cols, LETTERS, rows);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// buildMatrixNumeric
SEXP buildMatrixNumeric(NumericVector v, IntegerVector rowInd, IntegerVector colInd, CharacterVector colNames, int nRows, int nCols);
RcppExport SEXP openxlsx_buildMatrixNumeric(SEXP vSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP colNamesSEXP, SEXP nRowsSEXP, SEXP nColsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type rowInd(rowIndSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type colInd(colIndSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type colNames(colNamesSEXP );
        Rcpp::traits::input_parameter< int >::type nRows(nRowsSEXP );
        Rcpp::traits::input_parameter< int >::type nCols(nColsSEXP );
        SEXP __result = buildMatrixNumeric(v, rowInd, colInd, colNames, nRows, nCols);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// buildMatrixMixed
SEXP buildMatrixMixed(CharacterVector v, IntegerVector rowInd, IntegerVector colInd, CharacterVector colNames, int nRows, int nCols, IntegerVector charCols);
RcppExport SEXP openxlsx_buildMatrixMixed(SEXP vSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP colNamesSEXP, SEXP nRowsSEXP, SEXP nColsSEXP, SEXP charColsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type v(vSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type rowInd(rowIndSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type colInd(colIndSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type colNames(colNamesSEXP );
        Rcpp::traits::input_parameter< int >::type nRows(nRowsSEXP );
        Rcpp::traits::input_parameter< int >::type nCols(nColsSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type charCols(charColsSEXP );
        SEXP __result = buildMatrixMixed(v, rowInd, colInd, colNames, nRows, nCols, charCols);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// matrixRowInds
IntegerVector matrixRowInds(IntegerVector indices);
RcppExport SEXP openxlsx_matrixRowInds(SEXP indicesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type indices(indicesSEXP );
        IntegerVector __result = matrixRowInds(indices);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// buildCellMerges
List buildCellMerges(List comps);
RcppExport SEXP openxlsx_buildCellMerges(SEXP compsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type comps(compsSEXP );
        List __result = buildCellMerges(comps);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// readWorkbook
SEXP readWorkbook(CharacterVector v, NumericVector vn, IntegerVector stringInds, CharacterVector r, CharacterVector tR, int nRows, bool hasColNames);
RcppExport SEXP openxlsx_readWorkbook(SEXP vSEXP, SEXP vnSEXP, SEXP stringIndsSEXP, SEXP rSEXP, SEXP tRSEXP, SEXP nRowsSEXP, SEXP hasColNamesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type v(vSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type vn(vnSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type stringInds(stringIndsSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type r(rSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type tR(tRSEXP );
        Rcpp::traits::input_parameter< int >::type nRows(nRowsSEXP );
        Rcpp::traits::input_parameter< bool >::type hasColNames(hasColNamesSEXP );
        SEXP __result = readWorkbook(v, vn, stringInds, r, tR, nRows, hasColNames);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// quickBuildCellXML
SEXP quickBuildCellXML(std::string prior, std::string post, List sheetData, IntegerVector rowNumbers, std::string R_fileName);
RcppExport SEXP openxlsx_quickBuildCellXML(SEXP priorSEXP, SEXP postSEXP, SEXP sheetDataSEXP, SEXP rowNumbersSEXP, SEXP R_fileNameSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type prior(priorSEXP );
        Rcpp::traits::input_parameter< std::string >::type post(postSEXP );
        Rcpp::traits::input_parameter< List >::type sheetData(sheetDataSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type rowNumbers(rowNumbersSEXP );
        Rcpp::traits::input_parameter< std::string >::type R_fileName(R_fileNameSEXP );
        SEXP __result = quickBuildCellXML(prior, post, sheetData, rowNumbers, R_fileName);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// buildCellXML
CharacterVector buildCellXML(std::string prior, std::string post, List sheetData, List rowHeights, Function order, std::string R_fileName);
RcppExport SEXP openxlsx_buildCellXML(SEXP priorSEXP, SEXP postSEXP, SEXP sheetDataSEXP, SEXP rowHeightsSEXP, SEXP orderSEXP, SEXP R_fileNameSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type prior(priorSEXP );
        Rcpp::traits::input_parameter< std::string >::type post(postSEXP );
        Rcpp::traits::input_parameter< List >::type sheetData(sheetDataSEXP );
        Rcpp::traits::input_parameter< List >::type rowHeights(rowHeightsSEXP );
        Rcpp::traits::input_parameter< Function >::type order(orderSEXP );
        Rcpp::traits::input_parameter< std::string >::type R_fileName(R_fileNameSEXP );
        CharacterVector __result = buildCellXML(prior, post, sheetData, rowHeights, order, R_fileName);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// WhichMatch
IntegerVector WhichMatch(IntegerVector a, int b);
RcppExport SEXP openxlsx_WhichMatch(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type a(aSEXP );
        Rcpp::traits::input_parameter< int >::type b(bSEXP );
        IntegerVector __result = WhichMatch(a, b);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// buildTableXML
CharacterVector buildTableXML(std::string id, std::string ref, std::vector<std::string> colNames, bool showColNames, std::string tableStyle);
RcppExport SEXP openxlsx_buildTableXML(SEXP idSEXP, SEXP refSEXP, SEXP colNamesSEXP, SEXP showColNamesSEXP, SEXP tableStyleSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type id(idSEXP );
        Rcpp::traits::input_parameter< std::string >::type ref(refSEXP );
        Rcpp::traits::input_parameter< std::vector<std::string> >::type colNames(colNamesSEXP );
        Rcpp::traits::input_parameter< bool >::type showColNames(showColNamesSEXP );
        Rcpp::traits::input_parameter< std::string >::type tableStyle(tableStyleSEXP );
        CharacterVector __result = buildTableXML(id, ref, colNames, showColNames, tableStyle);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// uniqueCellAppend
List uniqueCellAppend(List sheetData, CharacterVector r, List newCells);
RcppExport SEXP openxlsx_uniqueCellAppend(SEXP sheetDataSEXP, SEXP rSEXP, SEXP newCellsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type sheetData(sheetDataSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type r(rSEXP );
        Rcpp::traits::input_parameter< List >::type newCells(newCellsSEXP );
        List __result = uniqueCellAppend(sheetData, r, newCells);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// writeCellStyles
List writeCellStyles(List sheetData, CharacterVector rows, IntegerVector cols, String styleId, std::vector<std::string> LETTERS);
RcppExport SEXP openxlsx_writeCellStyles(SEXP sheetDataSEXP, SEXP rowsSEXP, SEXP colsSEXP, SEXP styleIdSEXP, SEXP LETTERSSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type sheetData(sheetDataSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type rows(rowsSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type cols(colsSEXP );
        Rcpp::traits::input_parameter< String >::type styleId(styleIdSEXP );
        Rcpp::traits::input_parameter< std::vector<std::string> >::type LETTERS(LETTERSSEXP );
        List __result = writeCellStyles(sheetData, rows, cols, styleId, LETTERS);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// calcNRows
SEXP calcNRows(CharacterVector x);
RcppExport SEXP openxlsx_calcNRows(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP );
        SEXP __result = calcNRows(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// buildCellTypes
CharacterVector buildCellTypes(CharacterVector classes, int nRows);
RcppExport SEXP openxlsx_buildCellTypes(SEXP classesSEXP, SEXP nRowsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type classes(classesSEXP );
        Rcpp::traits::input_parameter< int >::type nRows(nRowsSEXP );
        CharacterVector __result = buildCellTypes(classes, nRows);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// removeEmptyNodes
CharacterVector removeEmptyNodes(CharacterVector x, CharacterVector emptyNodes);
RcppExport SEXP openxlsx_removeEmptyNodes(SEXP xSEXP, SEXP emptyNodesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type emptyNodes(emptyNodesSEXP );
        CharacterVector __result = removeEmptyNodes(x, emptyNodes);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getCellsWithChildren
CharacterVector getCellsWithChildren(std::string xmlFile, CharacterVector emptyNodes);
RcppExport SEXP openxlsx_getCellsWithChildren(SEXP xmlFileSEXP, SEXP emptyNodesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type xmlFile(xmlFileSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type emptyNodes(emptyNodesSEXP );
        CharacterVector __result = getCellsWithChildren(xmlFile, emptyNodes);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
